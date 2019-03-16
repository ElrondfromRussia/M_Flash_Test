#include "fktester.h"
#include <QDebug>

//тест флэшки
void FkTester::TestFK()
{
    QString total_path = curr_path;
    QString buf;
    QDir *curr_dir;
    QTextStream stream;
    QCryptographicHash meth_md5(QCryptographicHash::Md5);
    writtenfsnum = 0;
    emit writtenfs(writtenfsnum);
    for(int i = 0; i < count_files; i++)
    {
        if(free_place >= (size_files/1024))
        {
            free_place -= (size_files/1024);
            emit setFreeBytes(free_place);

            if(file_index % 100 == 0)
            {
                total_path = curr_path;
                total_path.append(QString::number(folder_index++));

                curr_dir = new QDir(total_path);

                if(!curr_dir->exists())
                    curr_dir->mkdir(total_path);

                if(!curr_dir->exists())
                {
                    qDebug() << "Тест (создание каталога)";
                    emit send_msg(QString("Сбой создания каталога"));
                    //emit stopTest();
                    emit errored();
                    emit finished();
                    return;
                }
            }

            // //закомменчено создание файлов на пк для проверки работы проги
//            QDir *pc_dir = new QDir("\\files");
//            if(!pc_dir->exists())
//                pc_dir->mkdir("\\files");

//            buf = QString("\\files\\").append(QString::number(file_index));
//            QFile file(buf.append(".bin"));
//            if(!file.open( QIODevice::WriteOnly))
//            {
//                qDebug() << "Тест (создание файла)";
//                emit send_msg(QString("Сбой открытия файла на ПК"));
//                //emit stopTest();
//                emit errored();
//                emit finished();
//                return;
//            }
//            stream.setDevice(&file);

            QChar ch = QString::number(file_index).at(0);
            QByteArray array(size_files, ch.toLatin1());

//            stream << array;
//            file.close();

            if(!curr_dir)
                curr_dir = new QDir(QDir::currentPath());
            buf = curr_dir->absolutePath().append("/").append(QString::number(file_index));
            QFile newfile(buf.append(".bin"));

            //write to fk
            if(!newfile.open(QIODevice::WriteOnly))
            {
                qDebug() << "Тест (создание файла на фк)";
                emit send_msg(QString("Сбой открытия файла на ФК"));
                //emit stopTest();
                emit errored();
                emit finished();
                return;
            }

            stream.setDevice(&newfile);


            stream << array;

            if(stream.status() != QTextStream::Ok)
            {
                setTextColor("red");
                printlog(QString("Write err in file %1").arg(file_index));             
                setTextColor("black");
                emit setInputErrs(++inperrs);
            }

            QByteArray res = meth_md5.hash(array, QCryptographicHash::Md5);
            meth_md5.reset();
            hashes1.append(res);

            newfile.close();

            file_index++;
            emit writtenfs(++writtenfsnum);
        }else
        {
            qDebug() << "Свободное место кончилось! Переход к проверке.";
            emit send_msg(QString("Кончилось свободное место. Переход к проверке"));
            break;
        }
        emit file_ready();
    }
    emit umount_pause();
}

void FkTester::stopTestFk()
{
    emit stopTest();
    emit finished();
}

//проверка флешки после теста
void FkTester::CheckFK()
{
    QString total_path = curr_path;
    QString buf;
    QDir *curr_dir;
    QCryptographicHash meth_md5(QCryptographicHash::Md5);
    int buf_file_ind = file_index;
    file_index = 0;
    folder_index = 0;

    for(int i = 0; i < buf_file_ind; i++)
    {
        if(file_index % 100 == 0)
        {
            total_path = curr_path;
            total_path.append(QString::number(folder_index++));

            curr_dir = new QDir(total_path);

            qDebug() << curr_dir->absolutePath();

            if(!curr_dir->exists())
            {
                qDebug() << "Тест (открытие каталога)";
                emit send_msg(QString("Проверка. Каталога на ФК не существует. Сбой."));
                //emit stopTest();
                emit errored();
                emit finished();
                return;
            }
        }

        if(!curr_dir)
            curr_dir = new QDir(QDir::currentPath());
        buf = curr_dir->absolutePath().append("/").append(QString::number(file_index));
        QFile newfile(buf.append(".bin"));
        if(!newfile.exists())
        {
            qDebug() << "Тест (проверка существования файла2)";
            emit send_msg(QString("Проверка. Файла на ФК не существует. Сбой."));
            //emit stopTest();
            emit errored();
            emit finished();
            return;
        }
        if(!newfile.open(QIODevice::ReadOnly))
        {
            qDebug() << "Тест (открытие файла на фк2)";
            emit send_msg(QString("Проверка. Сбой открытия файла при проверке."));
            //emit stopTest();
            emit errored();
            emit finished();
            return;
        }

        QByteArray readed;
        QTextStream stream(&readed, QIODevice::WriteOnly);

        stream << newfile.readAll();

        if(stream.status() != QTextStream::Ok)
        {
            setTextColor("red");
            printlog(QString("Read err in file %1").arg(file_index));     
            setTextColor("black");
            emit setOutputErrs(++outerrs);
        }

        QByteArray res = meth_md5.hash(readed, QCryptographicHash::Md5);
        meth_md5.reset();

        hashes2.append(res);
        if(file_index <= hashes1.size())
        {
            if(res.toHex() != hashes1.at(file_index).toHex())
            {
                setTextColor("red");
                printlog(QString("File err in file %1").arg(file_index));
                setTextColor("black");
                printlog(QString("Hash1: %1").arg(QString(res.toHex())).
                         append("\nHash2: %1").arg(QString(hashes1.at(file_index).toHex())));
                emit setWritErrs(++fileerrs);
            }
        }

        newfile.close();
        emit file_ready();
        file_index++;
    }
    emit stopTest();
    emit finished();
}

void FkTester::setAllSetts(QString &path, int freepl, int countf, int sizef)
{
    curr_path = path;
    free_place = freepl;
    count_files = countf;
    size_files = sizef;
}

