#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "fktester.h"



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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void show_drive_info(const QString & diskname);
    void accept_all_settings();
    void save_settings();
    void restore_settings();
    void set_dflt_settings();

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

    void on_setFreeBytes(int num);

    void on_files_written(int num);

    void on_setInputErrs(int num);
    void on_setOutputErrs(int num);

    void on_setWritErrs(int num);

    void on_file_ready();

    void on_umount_pause();

    void on_send_msg(QString msg);

    void on_stop();

    void on_exit_triggered();

    void on_logging_triggered();

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

    QString curr_fs;
    int free_place;
    int drve_size;
    int inperrs;
    int outerrs;
    int fileerrs;

    int count_files;
    int size_files;
    int files_per_dir;

    int iter;

    QTimer timer;
    QTime time;

    int test_running;

    QStorageInfo curr_storage;

    MyThread thread1;
    QSharedPointer<FkTester> tester;
    MyThread thread2;

    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};
#endif // MAINWINDOW_H
