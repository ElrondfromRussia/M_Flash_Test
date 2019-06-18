#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    file_index = 0;
    folder_index = 0;
    test_running = 0;
    iter = 0;

    ui->setframe->hide();
    ui->frame_log->hide();

    ui->diskbox->addItem("");

    QFileInfoList *flist = new QFileInfoList(QDir::drives());
    for(int k = 0; k < flist->size(); k++)
    {
        QStorageInfo storage;
        storage.setPath(flist->at(k).filePath());
        ui->diskbox->addItem(storage.rootPath());
    }

    restore_settings();

    time.setHMS(0,0,0);
    ui->timeline->setText(time.toString("hh:mm:ss"));
    connect(&timer, SIGNAL(timeout()), this, SLOT(onTimerShot()));

    ui->fsline->setReadOnly(true);
    ui->freeline->setReadOnly(true);
    ui->writtenline->setReadOnly(true);
    ui->inperrline->setReadOnly(true);
    ui->wrerrorline->setReadOnly(true);
    ui->timeline->setReadOnly(true);

    //Making .ico file from .png
//    QSharedPointer<QPixmap>window_icon = QSharedPointer<QPixmap>::create(":/imgs/icon_img.png");
//    setWindowIcon(QIcon(*window_icon));
//    QFile ficon;
//    ficon.setFileName("app_icon.ico");
//    if (!ficon.open(QFile::ReadWrite)) qWarning("Can't create icon file");
//    window_icon->save(&ficon);
//    ficon.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//отображение инфы о диске
void MainWindow::show_drive_info(const QString &diskname)
{
    QStorageInfo storage;
    storage.setPath(diskname);

    ui->fsline->setText(storage.fileSystemType());
    ui->freeline->setText(QString::number(storage.bytesAvailable()/1024).append(" Кб"));
    ui->writtenline->setText("0");
    ui->inperrline->setText("0");
    ui->wrerrorline->setText("0");

    free_place = storage.bytesAvailable()/1024;
}

//применить настройки
void MainWindow::accept_all_settings()
{
    if(!test_running)
    {
        count_files = ui->fcount_b->value();
        size_files =  ui->fsize_b->value()*1024*1024;
    }
}

//выбор диска
void MainWindow::on_diskbox_activated(const QString &arg1)
{
    if(!test_running)
    {
        show_drive_info(arg1);
        curr_drive = arg1;
        curr_path = arg1;
        curr_storage.setPath(curr_path);
    }
}

//кнопочки
//////////////////////////////////////////////
//обработка клика на "принять"
void MainWindow::on_accept_btn_clicked()
{
    accept_all_settings();
}

//старт теста
void MainWindow::on_start_btn_clicked()
{
    if(!test_running)
    {
        inperrs = 0;
        outerrs = 0;
        fileerrs = 0;
        if(ui->diskbox->currentIndex() != 0)
        {
            file_index = 0;
            folder_index = 0;

            test_running = 1;
            timer.start(1000);
            time.setHMS(0,0,0);
            ui->timeline->setText(time.toString("hh:mm:ss"));

            ui->testProgress->setValue(0);
            ui->testProgress->setMaximum(count_files);

            /////////////////////////////

            ///////////////////Tester init
            tester = QSharedPointer<FkTester>::create();
            tester->setAllSetts(curr_path, free_place, count_files, size_files);
            tester->moveToThread(&thread1);

            connect(this, &MainWindow::startFKtest, tester.data(), &FkTester::TestFK);
            connect(tester.data(), &FkTester::stopTest, this, &MainWindow::on_stop);
            connect(tester.data(), &FkTester::errored, this, &MainWindow::on_Errored);

            connect(tester.data(), &FkTester::setFreeBytes, this, &MainWindow::on_setFreeBytes);
            connect(tester.data(), &FkTester::writtenfs, this, &MainWindow::on_files_written);
            connect(tester.data(), &FkTester::file_ready, this, &MainWindow::on_file_ready);

            connect(tester.data(), &FkTester::send_msg, this, &MainWindow::on_send_msg);
            connect(tester.data(), &FkTester::printlog, this, &MainWindow::on_printlog);
            connect(tester.data(), &FkTester::setTextColor, this, &MainWindow::on_setTextColor);

            connect(tester.data(), &FkTester::setInputErrs, this, &MainWindow::on_setInputErrs);
            connect(tester.data(), &FkTester::setOutputErrs, this, &MainWindow::on_setOutputErrs);
            connect(tester.data(), &FkTester::setWritErrs, this, &MainWindow::on_setWritErrs);
            connect(tester.data(), &FkTester::umount_pause, this, &MainWindow::on_umount_pause);

            connect(this, &MainWindow::stopFKtest, tester.data(), &FkTester::stopTestFk);
            connect(this, &MainWindow::startCheckFk, tester.data(), &FkTester::CheckFK);

            connect(tester.data(), &FkTester::finished,&thread1, &QThread::quit);
            thread1.start();
            emit startFKtest();
            ///////////////////////////
        }
        else
        {
            QMessageBox::critical(this, tr("Старт"),
                                  tr("Диск не выбран!"));
        }
    }
}

//стоп теста
void MainWindow::on_stop_btn_clicked()
{
    if(timer.isActive())
        timer.stop();
    emit stopFKtest();
    test_running = 0;
}

//проверка флешки (резервная кнопка, если сбили процесс)
void MainWindow::on_check_btn_clicked()
{
    if(!test_running)
    {
        //qDebug() << "here";
        QStorageInfo storage;
        storage.setPath(curr_path);
        if(!storage.isValid())
        {
            QMessageBox::critical(this, tr("Тест"),
                                  tr("Диск не доступен!"));
        }
        else if(tester)
        {
            file_index = 0;
            folder_index = 0;

            if(timer.isActive())
                timer.stop();
            test_running = 1;
            timer.start(1000);
            time.setHMS(0,0,0);
            ui->timeline->setText(time.toString("hh:mm:ss"));

            ui->testProgress->setValue(0);
            ui->testProgress->setMaximum(count_files);

            if(!thread1.isRunning())
            {
                tester->moveToThread(&thread1);
                connect(tester.data(), &FkTester::finished,&thread1, &QThread::quit);
                thread1.start();
            }

            emit startCheckFk();
        }

        if(timer.isActive())
            timer.stop();
        emit stopFKtest();
        test_running = 0;
    }
    else
    {
        QMessageBox::warning(this, tr("Проверка"),
                                 tr("Сначала проведите тест!"));
    }
}


//////////////////////////////////////////////

//секунда прошла
void MainWindow::onTimerShot()
{
    time.setHMS(time.hour() + ((time.minute() +
                                ((time.second()+1) % 60 == 0)) % 60 == 0 && time.minute() != 0),
                (time.minute() + ((time.second()+1) % 60 == 0)) % 60,
                (time.second()+1) % 60);
    ui->timeline->setText(time.toString("hh:mm:ss"));
}

//переходы по вкладкам и клики на панели сверху
///////////////////////////////////////////////
//клик на дом, возвращение на главную
void MainWindow::on_main_page_triggered()
{
    ui->setframe->hide();
    ui->frame_log->hide();
    ui->mainfr->show();
}

//клик на шестеренку, страница настроек
void MainWindow::on_settings_act_triggered()
{
    ui->setframe->show();
    ui->frame_log->hide();
    ui->mainfr->hide();
}

//клик на метлу, очистка полей, если не идет тест
void MainWindow::on_clear_triggered()
{
    if(!test_running)
    {
        if(ui->mainfr->isVisible())
        {
            ui->diskbox->setCurrentIndex(0);
            ui->fsline->setText("");
            ui->freeline->setText(QString("").append(" Кб"));
            ui->writtenline->setText("0");
            ui->inperrline->setText("0");
            ui->wrerrorline->setText("0");
            QTime time_buf;
            time_buf.setHMS(0,0,0);
            ui->timeline->setText(time_buf.toString("hh:mm:ss"));
            ui->testProgress->setValue(0);
        }
        else if(ui->frame_log->isVisible())
        {
            ui->log_edit->clear();
        }
    }
}
///////////////////////////////////////////////


//показать, сколько свободных байт на флешке (Кб)
void MainWindow::on_setFreeBytes(int num)
{
    ui->freeline->setText(QString::number(num).append(" Кб"));
}

//показать, сколько файлов уже записано
void MainWindow::on_files_written(int num)
{
    ui->writtenline->setText(QString::number(num));
}


///////////////////////////////////////////////
//инкремент ошибок ввода/вывода
void MainWindow::on_setInputErrs(int num)
{
    ui->inperrline->setText(QString::number(num));
    inperrs = (num);
}
void MainWindow::on_setOutputErrs(int num)
{
    ui->inperrline_2->setText(QString::number(num));
    outerrs = num;
}
//инкремент ошибок записи
void MainWindow::on_setWritErrs(int num)
{
    ui->wrerrorline->setText(QString::number(num));
    fileerrs = num;
}

//гордо уходим
void MainWindow::on_exit_triggered()
{
    save_settings();
    close();
}

//вкладка журнала
void MainWindow::on_logging_triggered()
{
    ui->setframe->hide();
    ui->mainfr->hide();
    ui->frame_log->show();
}

/////////////////////////////////////////////////

//накрутка прогрессбара после записи очередного файла
void MainWindow::on_file_ready()
{
    ui->testProgress->setValue(ui->testProgress->value()+1);
}

//пауза между отмонтир - примонтир
void MainWindow::on_umount_pause()
{
    if(QMessageBox::question(this, tr("Тест"),
                             tr("Отключите ФК, затем подключите и нажмите ОК"),
                             QMessageBox::Yes,
                             QMessageBox::No|QMessageBox::Default|QMessageBox::Escape) == QMessageBox::Yes)
    {
        QStorageInfo storage;
        storage.setPath(curr_path);
        if(!storage.isValid())
        {
            QMessageBox::critical(this, tr("Тест"),
                                  tr("Диск не доступен!"));
        }
        else if(tester)
        {
            file_index = 0;
            folder_index = 0;

            if(timer.isActive())
                timer.stop();
            test_running = 1;
            timer.start(1000);
            ui->timeline->setText(time.toString("hh:mm:ss"));

            ui->testProgress->setValue(0);
            ui->testProgress->setMaximum(count_files);

            if(!thread1.isRunning())
            {
                tester->moveToThread(&thread1);
                connect(tester.data(), &FkTester::finished,&thread1, &QThread::quit);
                thread1.start();
            }

            emit startCheckFk();
        }
        else
        {
            if(timer.isActive())
                timer.stop();
            emit stopFKtest();
            test_running = 0;
        }
    }
    else
    {
        if(timer.isActive())
            timer.stop();
        emit stopFKtest();
        test_running = 0;
    }
}

//отправка сообщения о тесте (вывод просто нам)
void MainWindow::on_send_msg(QString msg)
{
    QMessageBox::critical(this, tr("Тест"),
                          msg);
}

//остановить все
void MainWindow::on_stop()
{
    if(timer.isActive())
        timer.stop();
    test_running = 0;

    QString res;
    res.append("Результат:\n"
               "Ошибок ввода: ").append(QString::number(inperrs));
    res.append("\nОшибок вывода: ").append(QString::number(outerrs));
    res.append("\nНесовпадений хэш массивов: ").append(QString::number(fileerrs));
    QMessageBox::information(this, tr("Тест завершен"),
                             res);
    if(inperrs == 0 && outerrs == 0 && fileerrs == 0)
    {
        ui->log_edit->setTextColor(QColor("green"));
        ui->log_edit->append("ФК ИСПРАВНА");
        ui->log_edit->setTextColor(QColor("black"));
    }
    else
    {
        ui->log_edit->setTextColor(QColor("red"));
        ui->log_edit->append("ФК НЕИСПРАВНА...");
        ui->log_edit->setTextColor(QColor("black"));
    }
}

//сохранение настроек при закрытии
void MainWindow::save_settings()
{
    QString fileName = "settings.xml";
    QDomDocument doc("settings_file");
    QDomElement settings_file = doc.createElement("settings");
    doc.appendChild(settings_file);
    QDomElement settings = doc.createElement("setts");
    settings_file.appendChild(settings);

    QDomElement setting = doc.createElement("file_size");
    QDomAttr setsize = doc.createAttribute("size");
    setsize.setValue(QString::number(size_files));
    setting.setAttributeNode(setsize);

    QDomElement fcount = doc.createElement("num_files");
    QDomAttr setcount = doc.createAttribute("fcount");
    setcount.setValue(QString::number(count_files));
    fcount.setAttributeNode(setcount);

    settings.appendChild(setting);
    settings.appendChild(fcount);


    QFile saving_file(fileName);
    if (!saving_file.open(QIODevice::WriteOnly))
    {
        QMessageBox::critical(this, tr("Сохранение настроек"),
                              tr("Настройки не сохранены"));
        return;
    }
    QTextStream s_F(&saving_file);
    s_F.setCodec("UTF-8");
    s_F << doc;
    saving_file.close();
}

//загрузка настроек из файла, если есть
void MainWindow::restore_settings()
{
    QString fname = "settings.xml";
    QFile settings_file(fname);
    QDomDocument domDoc;
    if(settings_file.exists())
    {
        qDebug() << "file is here";
        if (!settings_file.open(QIODevice::ReadOnly))
        {
            QMessageBox::critical(this, tr("Настройки"),
                                  tr("Некорректный файл, будут установлены настройки по умолчанию!"));
            qDebug() << "defalt error file";
            set_dflt_settings();
        }
        else
        {
            if(domDoc.setContent(&settings_file))
            {
                QDomElement comm_map = domDoc.documentElement();
                QDomNode properties = comm_map.firstChild();
                if(!properties.isNull())
                {
                    QDomNode prop = properties.firstChild();
                    while(!prop.isNull())
                    {
                        if(prop.isElement())
                        {
                            QDomElement prop_el = prop.toElement();
                            if(!prop_el.isNull())
                            {
                                if(prop_el.tagName()=="file_size")
                                {
                                    size_files = prop_el.attribute("size", "").toInt();
                                }
                                if(prop_el.tagName()=="num_files")
                                {
                                    count_files = prop_el.attribute("fcount", "").toInt();
                                }
                            }
                        }
                        prop = prop.nextSibling();
                    }
                }
            }
            else
            {
                qDebug() << "defalt can not set xml contant";
                set_dflt_settings();
            }
            settings_file.close();

            ui->fcount_b->setValue(count_files);
            ui->fsize_b->setValue(size_files/1024/1024);
        }
    }
    else
    {
        qDebug() << "defalt total";
        set_dflt_settings();
    }
}

//настройки по умолчанию
void MainWindow::set_dflt_settings()
{
    ui->fcount_b->setValue(1900);
    ui->fsize_b->setValue(1);
    count_files = ui->fcount_b->value();
    size_files =  ui->fsize_b->value()*1024*1024;
}

//печатаем логи во вкладку логов
void MainWindow::on_printlog(QString msg)
{
    ui->log_edit->append(msg);
}

//подсветка текста цветом
void MainWindow::on_setTextColor(QString color)
{
    ui->log_edit->setTextColor(QColor(color));
}

//о нет, ошибка вышла
void MainWindow::on_Errored()
{
    if(timer.isActive())
        timer.stop();
    test_running = 0;
}


//////////////////////////////////////////////////////
/////обработка движений мыши, которая может хватать и тянуть окно
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalX() - m_nMouseClick_X_Coordinate, event->globalY() - m_nMouseClick_Y_Coordinate);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}
