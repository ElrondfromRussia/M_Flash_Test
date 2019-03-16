/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyThread_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyThread_t qt_meta_stringdata_MyThread = {
    {
QT_MOC_LITERAL(0, 0, 8) // "MyThread"

    },
    "MyThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MyThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MyThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MyThread.data,
      qt_meta_data_MyThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyThread.stringdata0))
        return static_cast<void*>(const_cast< MyThread*>(this));
    return QThread::qt_metacast(_clname);
}

int MyThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[32];
    char stringdata0[461];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "startFKtest"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "stopFKtest"
QT_MOC_LITERAL(4, 35, 12), // "startCheckFk"
QT_MOC_LITERAL(5, 48, 20), // "on_diskbox_activated"
QT_MOC_LITERAL(6, 69, 4), // "arg1"
QT_MOC_LITERAL(7, 74, 21), // "on_accept_btn_clicked"
QT_MOC_LITERAL(8, 96, 20), // "on_start_btn_clicked"
QT_MOC_LITERAL(9, 117, 19), // "on_stop_btn_clicked"
QT_MOC_LITERAL(10, 137, 20), // "on_check_btn_clicked"
QT_MOC_LITERAL(11, 158, 11), // "onTimerShot"
QT_MOC_LITERAL(12, 170, 22), // "on_main_page_triggered"
QT_MOC_LITERAL(13, 193, 25), // "on_settings_act_triggered"
QT_MOC_LITERAL(14, 219, 18), // "on_clear_triggered"
QT_MOC_LITERAL(15, 238, 15), // "on_setFreeBytes"
QT_MOC_LITERAL(16, 254, 3), // "num"
QT_MOC_LITERAL(17, 258, 16), // "on_files_written"
QT_MOC_LITERAL(18, 275, 15), // "on_setInputErrs"
QT_MOC_LITERAL(19, 291, 16), // "on_setOutputErrs"
QT_MOC_LITERAL(20, 308, 14), // "on_setWritErrs"
QT_MOC_LITERAL(21, 323, 13), // "on_file_ready"
QT_MOC_LITERAL(22, 337, 15), // "on_umount_pause"
QT_MOC_LITERAL(23, 353, 11), // "on_send_msg"
QT_MOC_LITERAL(24, 365, 3), // "msg"
QT_MOC_LITERAL(25, 369, 7), // "on_stop"
QT_MOC_LITERAL(26, 377, 17), // "on_exit_triggered"
QT_MOC_LITERAL(27, 395, 20), // "on_logging_triggered"
QT_MOC_LITERAL(28, 416, 11), // "on_printlog"
QT_MOC_LITERAL(29, 428, 15), // "on_setTextColor"
QT_MOC_LITERAL(30, 444, 5), // "color"
QT_MOC_LITERAL(31, 450, 10) // "on_Errored"

    },
    "MainWindow\0startFKtest\0\0stopFKtest\0"
    "startCheckFk\0on_diskbox_activated\0"
    "arg1\0on_accept_btn_clicked\0"
    "on_start_btn_clicked\0on_stop_btn_clicked\0"
    "on_check_btn_clicked\0onTimerShot\0"
    "on_main_page_triggered\0on_settings_act_triggered\0"
    "on_clear_triggered\0on_setFreeBytes\0"
    "num\0on_files_written\0on_setInputErrs\0"
    "on_setOutputErrs\0on_setWritErrs\0"
    "on_file_ready\0on_umount_pause\0on_send_msg\0"
    "msg\0on_stop\0on_exit_triggered\0"
    "on_logging_triggered\0on_printlog\0"
    "on_setTextColor\0color\0on_Errored"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    0,  145,    2, 0x06 /* Public */,
       4,    0,  146,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  147,    2, 0x08 /* Private */,
       7,    0,  150,    2, 0x08 /* Private */,
       8,    0,  151,    2, 0x08 /* Private */,
       9,    0,  152,    2, 0x08 /* Private */,
      10,    0,  153,    2, 0x08 /* Private */,
      11,    0,  154,    2, 0x08 /* Private */,
      12,    0,  155,    2, 0x08 /* Private */,
      13,    0,  156,    2, 0x08 /* Private */,
      14,    0,  157,    2, 0x08 /* Private */,
      15,    1,  158,    2, 0x08 /* Private */,
      17,    1,  161,    2, 0x08 /* Private */,
      18,    1,  164,    2, 0x08 /* Private */,
      19,    1,  167,    2, 0x08 /* Private */,
      20,    1,  170,    2, 0x08 /* Private */,
      21,    0,  173,    2, 0x08 /* Private */,
      22,    0,  174,    2, 0x08 /* Private */,
      23,    1,  175,    2, 0x08 /* Private */,
      25,    0,  178,    2, 0x08 /* Private */,
      26,    0,  179,    2, 0x08 /* Private */,
      27,    0,  180,    2, 0x08 /* Private */,
      28,    1,  181,    2, 0x08 /* Private */,
      29,    1,  184,    2, 0x08 /* Private */,
      31,    0,  187,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startFKtest(); break;
        case 1: _t->stopFKtest(); break;
        case 2: _t->startCheckFk(); break;
        case 3: _t->on_diskbox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_accept_btn_clicked(); break;
        case 5: _t->on_start_btn_clicked(); break;
        case 6: _t->on_stop_btn_clicked(); break;
        case 7: _t->on_check_btn_clicked(); break;
        case 8: _t->onTimerShot(); break;
        case 9: _t->on_main_page_triggered(); break;
        case 10: _t->on_settings_act_triggered(); break;
        case 11: _t->on_clear_triggered(); break;
        case 12: _t->on_setFreeBytes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_files_written((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_setInputErrs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_setOutputErrs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_setWritErrs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_file_ready(); break;
        case 18: _t->on_umount_pause(); break;
        case 19: _t->on_send_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->on_stop(); break;
        case 21: _t->on_exit_triggered(); break;
        case 22: _t->on_logging_triggered(); break;
        case 23: _t->on_printlog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->on_setTextColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->on_Errored(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::startFKtest)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::stopFKtest)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::startCheckFk)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::startFKtest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::stopFKtest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainWindow::startCheckFk()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
