#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "fktester.h"

//класс потока
class MyThread : public QThread {
    Q_OBJECT
public:
    MyThread()
    {
    }
    void run()
    {
        exec();
    }
};

namespace Ui {
class MainWindow;
}

//класс управляющего окна
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void show_drive_info(const QString & diskname); //показать диски
    void accept_all_settings(); //принять настройки
    void save_settings(); //сохранить настройки в xml
    void restore_settings(); //восстановить настройки из файла
    void set_dflt_settings(); //по дефолту настройки

signals:
    void startFKtest();
    void stopFKtest();
    void startCheckFk();

private slots:
    void on_diskbox_activated(const QString &arg1);

    void on_accept_btn_clicked();
    void on_start_btn_clicked();
    void on_stop_btn_clicked();
    void on_check_btn_clicked();

    void onTimerShot();

    void on_main_page_triggered();
    void on_settings_act_triggered();
    void on_clear_triggered();
    void on_exit_triggered();
    void on_logging_triggered();

    void on_setFreeBytes(int num);
    void on_files_written(int num);

    void on_setInputErrs(int num);
    void on_setOutputErrs(int num);
    void on_setWritErrs(int num);

    void on_file_ready();
    void on_umount_pause();
    void on_send_msg(QString msg);
    void on_stop();
    void on_printlog(QString msg);
    void on_setTextColor(QString color);
    void on_Errored();

private:
    Ui::MainWindow *ui;
    QPixmap * arr1;
    QPixmap * arr2;
    QPixmap * setts;
    QString curr_drive;
    QString curr_path;

    int file_index;
    int folder_index;

    QString curr_fs; //возможно, потомв
    int free_place; //свободно на диске
    int drve_size; // размер дичка
    int inperrs; //ошибки записи
    int outerrs; //ошибки чтения
    int fileerrs; //ошибки открытия и тд

    int count_files; //количество файлов
    int size_files; //размер файлов
    int files_per_dir; //файлов на каталог

    int iter;

    QTimer timer; //таймер
    QTime time; //время теста

    int test_running; //флаг идущего теста

    QStorageInfo curr_storage; //текущий диск

    MyThread thread1; //поток 1 приложения
    QSharedPointer<FkTester> tester;
    MyThread thread2; // поток 2 часиков

    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};
#endif // MAINWINDOW_H
