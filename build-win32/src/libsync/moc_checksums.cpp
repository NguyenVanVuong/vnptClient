/****************************************************************************
** Meta object code from reading C++ file 'checksums.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/libsync/checksums.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checksums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ComputeChecksum_t {
    QByteArrayData data[6];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ComputeChecksum_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ComputeChecksum_t qt_meta_stringdata_OCC__ComputeChecksum = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::ComputeChecksum"
QT_MOC_LITERAL(1, 21, 4), // "done"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "checksumType"
QT_MOC_LITERAL(4, 40, 8), // "checksum"
QT_MOC_LITERAL(5, 49, 19) // "slotCalculationDone"

    },
    "OCC::ComputeChecksum\0done\0\0checksumType\0"
    "checksum\0slotCalculationDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ComputeChecksum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::ComputeChecksum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComputeChecksum *_t = static_cast<ComputeChecksum *>(_o);
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->slotCalculationDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ComputeChecksum::*_t)(const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ComputeChecksum::done)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::ComputeChecksum::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__ComputeChecksum.data,
      qt_meta_data_OCC__ComputeChecksum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ComputeChecksum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ComputeChecksum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ComputeChecksum.stringdata))
        return static_cast<void*>(const_cast< ComputeChecksum*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::ComputeChecksum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::ComputeChecksum::done(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__ValidateChecksumHeader_t {
    QByteArrayData data[8];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ValidateChecksumHeader_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ValidateChecksumHeader_t qt_meta_stringdata_OCC__ValidateChecksumHeader = {
    {
QT_MOC_LITERAL(0, 0, 27), // "OCC::ValidateChecksumHeader"
QT_MOC_LITERAL(1, 28, 9), // "validated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "checksumType"
QT_MOC_LITERAL(4, 52, 8), // "checksum"
QT_MOC_LITERAL(5, 61, 16), // "validationFailed"
QT_MOC_LITERAL(6, 78, 6), // "errMsg"
QT_MOC_LITERAL(7, 85, 22) // "slotChecksumCalculated"

    },
    "OCC::ValidateChecksumHeader\0validated\0"
    "\0checksumType\0checksum\0validationFailed\0"
    "errMsg\0slotChecksumCalculated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ValidateChecksumHeader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,

       0        // eod
};

void OCC::ValidateChecksumHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValidateChecksumHeader *_t = static_cast<ValidateChecksumHeader *>(_o);
        switch (_id) {
        case 0: _t->validated((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->validationFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotChecksumCalculated((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ValidateChecksumHeader::*_t)(const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ValidateChecksumHeader::validated)) {
                *result = 0;
            }
        }
        {
            typedef void (ValidateChecksumHeader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ValidateChecksumHeader::validationFailed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::ValidateChecksumHeader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__ValidateChecksumHeader.data,
      qt_meta_data_OCC__ValidateChecksumHeader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ValidateChecksumHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ValidateChecksumHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ValidateChecksumHeader.stringdata))
        return static_cast<void*>(const_cast< ValidateChecksumHeader*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::ValidateChecksumHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OCC::ValidateChecksumHeader::validated(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::ValidateChecksumHeader::validationFailed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__CSyncChecksumHook_t {
    QByteArrayData data[1];
    char stringdata[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CSyncChecksumHook_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CSyncChecksumHook_t qt_meta_stringdata_OCC__CSyncChecksumHook = {
    {
QT_MOC_LITERAL(0, 0, 22) // "OCC::CSyncChecksumHook"

    },
    "OCC::CSyncChecksumHook"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CSyncChecksumHook[] = {

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

void OCC::CSyncChecksumHook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OCC::CSyncChecksumHook::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__CSyncChecksumHook.data,
      qt_meta_data_OCC__CSyncChecksumHook,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::CSyncChecksumHook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CSyncChecksumHook::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CSyncChecksumHook.stringdata))
        return static_cast<void*>(const_cast< CSyncChecksumHook*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::CSyncChecksumHook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
