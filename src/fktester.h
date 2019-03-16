#ifndef FKTESTER_H
#define FKTESTER_H

#include <QObject>
#include <QMessageBox>
#include <QDir>
#include <QTextStream>
#include <QVector>
#include <QCryptographicHash>
#include <QString>
#include <QBuffer>
#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QFileInfo>
#include <QDebug>
#include <QStorageInfo>
#include <QThread>
#include <QSharedPointer>
#include <QMouseEvent>
#include <QDomDocument>

class FkTester : public QObject
{
    Q_OBJECT
public:
    FkTester(QObject* pobj = 0) : QObject(pobj)
    {
        file_index = 0;
        folder_index = 0;
        inperrs = 0;
        fileerrs = 0;
        writtenfsnum = 0;
        outerrs = 0;
    }

    void setAllSetts(QString &path, int freepl, int countf, int sizef);
signals:
    void setFreeBytes(int num);
    void setInputErrs(int num);
    void setOutputErrs(int num);
    void setWritErrs(int num);
    void writtenfs(int num);
    void stopTest();
    void finished();
    void file_ready();
    void umount_pause();
    void send_msg(QString msg);
    void printlog(QString msg);
    void setTextColor(QString color);
    void errored();

public slots:
    void TestFK();
    void stopTestFk();
    void CheckFK();

private:
    QString curr_path;

    int file_index;
    int folder_index;

    int writtenfsnum;

    int free_place;
    int inperrs;
    int outerrs;
    int fileerrs;

    int count_files;
    int size_files;

    QVector<QByteArray> hashes1;
    QVector<QByteArray> hashes2;
};

#endif // FKTESTER_H
