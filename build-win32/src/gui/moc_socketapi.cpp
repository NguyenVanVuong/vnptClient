/****************************************************************************
** Meta object code from reading C++ file 'socketapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/socketapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__SocketApi_t {
    QByteArrayData data[30];
    char stringdata[463];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SocketApi_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SocketApi_t qt_meta_stringdata_OCC__SocketApi = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::SocketApi"
QT_MOC_LITERAL(1, 15, 20), // "shareCommandReceived"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "sharePath"
QT_MOC_LITERAL(4, 47, 9), // "localPath"
QT_MOC_LITERAL(5, 57, 16), // "resharingAllowed"
QT_MOC_LITERAL(6, 74, 29), // "shareUserGroupCommandReceived"
QT_MOC_LITERAL(7, 104, 20), // "slotUpdateFolderView"
QT_MOC_LITERAL(8, 125, 7), // "Folder*"
QT_MOC_LITERAL(9, 133, 1), // "f"
QT_MOC_LITERAL(10, 135, 18), // "slotUnregisterPath"
QT_MOC_LITERAL(11, 154, 5), // "alias"
QT_MOC_LITERAL(12, 160, 16), // "slotRegisterPath"
QT_MOC_LITERAL(13, 177, 17), // "slotNewConnection"
QT_MOC_LITERAL(14, 195, 16), // "onLostConnection"
QT_MOC_LITERAL(15, 212, 14), // "slotReadSocket"
QT_MOC_LITERAL(16, 227, 21), // "slotFileStatusChanged"
QT_MOC_LITERAL(17, 249, 14), // "systemFileName"
QT_MOC_LITERAL(18, 264, 14), // "SyncFileStatus"
QT_MOC_LITERAL(19, 279, 10), // "fileStatus"
QT_MOC_LITERAL(20, 290, 30), // "command_RETRIEVE_FOLDER_STATUS"
QT_MOC_LITERAL(21, 321, 8), // "argument"
QT_MOC_LITERAL(22, 330, 10), // "QIODevice*"
QT_MOC_LITERAL(23, 341, 6), // "socket"
QT_MOC_LITERAL(24, 348, 28), // "command_RETRIEVE_FILE_STATUS"
QT_MOC_LITERAL(25, 377, 13), // "command_SHARE"
QT_MOC_LITERAL(26, 391, 9), // "localFile"
QT_MOC_LITERAL(27, 401, 15), // "command_VERSION"
QT_MOC_LITERAL(28, 417, 20), // "command_SHARE_STATUS"
QT_MOC_LITERAL(29, 438, 24) // "command_SHARE_MENU_TITLE"

    },
    "OCC::SocketApi\0shareCommandReceived\0"
    "\0sharePath\0localPath\0resharingAllowed\0"
    "shareUserGroupCommandReceived\0"
    "slotUpdateFolderView\0Folder*\0f\0"
    "slotUnregisterPath\0alias\0slotRegisterPath\0"
    "slotNewConnection\0onLostConnection\0"
    "slotReadSocket\0slotFileStatusChanged\0"
    "systemFileName\0SyncFileStatus\0fileStatus\0"
    "command_RETRIEVE_FOLDER_STATUS\0argument\0"
    "QIODevice*\0socket\0command_RETRIEVE_FILE_STATUS\0"
    "command_SHARE\0localFile\0command_VERSION\0"
    "command_SHARE_STATUS\0command_SHARE_MENU_TITLE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SocketApi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,
       6,    3,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  103,    2, 0x0a /* Public */,
      10,    1,  106,    2, 0x0a /* Public */,
      12,    1,  109,    2, 0x0a /* Public */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    2,  115,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      20,    2,  120,    2, 0x00 /* Private */,
      24,    2,  125,    2, 0x00 /* Private */,
      25,    2,  130,    2, 0x00 /* Private */,
      27,    2,  135,    2, 0x00 /* Private */,
      28,    2,  140,    2, 0x00 /* Private */,
      29,    2,  145,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,   17,   19,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   21,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   21,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   26,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   21,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   26,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   21,   23,

       0        // eod
};

void OCC::SocketApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SocketApi *_t = static_cast<SocketApi *>(_o);
        switch (_id) {
        case 0: _t->shareCommandReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->shareUserGroupCommandReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->slotUpdateFolderView((*reinterpret_cast< Folder*(*)>(_a[1]))); break;
        case 3: _t->slotUnregisterPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotRegisterPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotNewConnection(); break;
        case 6: _t->onLostConnection(); break;
        case 7: _t->slotReadSocket(); break;
        case 8: _t->slotFileStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< SyncFileStatus(*)>(_a[2]))); break;
        case 9: _t->command_RETRIEVE_FOLDER_STATUS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 10: _t->command_RETRIEVE_FILE_STATUS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 11: _t->command_SHARE((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 12: _t->command_VERSION((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 13: _t->command_SHARE_STATUS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 14: _t->command_SHARE_MENU_TITLE((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SocketApi::*_t)(const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketApi::shareCommandReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (SocketApi::*_t)(const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketApi::shareUserGroupCommandReceived)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::SocketApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__SocketApi.data,
      qt_meta_data_OCC__SocketApi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::SocketApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SocketApi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SocketApi.stringdata))
        return static_cast<void*>(const_cast< SocketApi*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::SocketApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void OCC::SocketApi::shareCommandReceived(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::SocketApi::shareUserGroupCommandReceived(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
