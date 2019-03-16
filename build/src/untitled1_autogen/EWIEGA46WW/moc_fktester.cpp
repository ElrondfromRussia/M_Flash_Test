/****************************************************************************
** Meta object code from reading C++ file 'fktester.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/fktester.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fktester.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FkTester_t {
    QByteArrayData data[21];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FkTester_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FkTester_t qt_meta_stringdata_FkTester = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FkTester"
QT_MOC_LITERAL(1, 9, 12), // "setFreeBytes"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "num"
QT_MOC_LITERAL(4, 27, 12), // "setInputErrs"
QT_MOC_LITERAL(5, 40, 13), // "setOutputErrs"
QT_MOC_LITERAL(6, 54, 11), // "setWritErrs"
QT_MOC_LITERAL(7, 66, 9), // "writtenfs"
QT_MOC_LITERAL(8, 76, 8), // "stopTest"
QT_MOC_LITERAL(9, 85, 8), // "finished"
QT_MOC_LITERAL(10, 94, 10), // "file_ready"
QT_MOC_LITERAL(11, 105, 12), // "umount_pause"
QT_MOC_LITERAL(12, 118, 8), // "send_msg"
QT_MOC_LITERAL(13, 127, 3), // "msg"
QT_MOC_LITERAL(14, 131, 8), // "printlog"
QT_MOC_LITERAL(15, 140, 12), // "setTextColor"
QT_MOC_LITERAL(16, 153, 5), // "color"
QT_MOC_LITERAL(17, 159, 7), // "errored"
QT_MOC_LITERAL(18, 167, 6), // "TestFK"
QT_MOC_LITERAL(19, 174, 10), // "stopTestFk"
QT_MOC_LITERAL(20, 185, 7) // "CheckFK"

    },
    "FkTester\0setFreeBytes\0\0num\0setInputErrs\0"
    "setOutputErrs\0setWritErrs\0writtenfs\0"
    "stopTest\0finished\0file_ready\0umount_pause\0"
    "send_msg\0msg\0printlog\0setTextColor\0"
    "color\0errored\0TestFK\0stopTestFk\0CheckFK"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FkTester[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       5,    1,  100,    2, 0x06 /* Public */,
       6,    1,  103,    2, 0x06 /* Public */,
       7,    1,  106,    2, 0x06 /* Public */,
       8,    0,  109,    2, 0x06 /* Public */,
       9,    0,  110,    2, 0x06 /* Public */,
      10,    0,  111,    2, 0x06 /* Public */,
      11,    0,  112,    2, 0x06 /* Public */,
      12,    1,  113,    2, 0x06 /* Public */,
      14,    1,  116,    2, 0x06 /* Public */,
      15,    1,  119,    2, 0x06 /* Public */,
      17,    0,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  123,    2, 0x0a /* Public */,
      19,    0,  124,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FkTester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FkTester *_t = static_cast<FkTester *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFreeBytes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setInputErrs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setOutputErrs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setWritErrs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->writtenfs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->stopTest(); break;
        case 6: _t->finished(); break;
        case 7: _t->file_ready(); break;
        case 8: _t->umount_pause(); break;
        case 9: _t->send_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->printlog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setTextColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->errored(); break;
        case 13: _t->TestFK(); break;
        case 14: _t->stopTestFk(); break;
        case 15: _t->CheckFK(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FkTester::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::setFreeBytes)) {
                *result = 0;
            }
        }
        {
            typedef void (FkTester::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::setInputErrs)) {
                *result = 1;
            }
        }
        {
            typedef void (FkTester::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::setOutputErrs)) {
                *result = 2;
            }
        }
        {
            typedef void (FkTester::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::setWritErrs)) {
                *result = 3;
            }
        }
        {
            typedef void (FkTester::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::writtenfs)) {
                *result = 4;
            }
        }
        {
            typedef void (FkTester::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::stopTest)) {
                *result = 5;
            }
        }
        {
            typedef void (FkTester::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::finished)) {
                *result = 6;
            }
        }
        {
            typedef void (FkTester::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::file_ready)) {
                *result = 7;
            }
        }
        {
            typedef void (FkTester::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::umount_pause)) {
                *result = 8;
            }
        }
        {
            typedef void (FkTester::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::send_msg)) {
                *result = 9;
            }
        }
        {
            typedef void (FkTester::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::printlog)) {
                *result = 10;
            }
        }
        {
            typedef void (FkTester::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::setTextColor)) {
                *result = 11;
            }
        }
        {
            typedef void (FkTester::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FkTester::errored)) {
                *result = 12;
            }
        }
    }
}

const QMetaObject FkTester::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FkTester.data,
      qt_meta_data_FkTester,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FkTester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FkTester::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FkTester.stringdata0))
        return static_cast<void*>(const_cast< FkTester*>(this));
    return QObject::qt_metacast(_clname);
}

int FkTester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void FkTester::setFreeBytes(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FkTester::setInputErrs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FkTester::setOutputErrs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FkTester::setWritErrs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FkTester::writtenfs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FkTester::stopTest()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void FkTester::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void FkTester::file_ready()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void FkTester::umount_pause()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void FkTester::send_msg(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FkTester::printlog(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FkTester::setTextColor(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FkTester::errored()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
