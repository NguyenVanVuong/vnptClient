/****************************************************************************
** Meta object code from reading C++ file 'accountstate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/accountstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__AccountState_t {
    QByteArrayData data[14];
    char stringdata[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AccountState_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AccountState_t qt_meta_stringdata_OCC__AccountState = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::AccountState"
QT_MOC_LITERAL(1, 18, 12), // "stateChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "state"
QT_MOC_LITERAL(4, 38, 18), // "isConnectedChanged"
QT_MOC_LITERAL(5, 57, 29), // "slotConnectionValidatorResult"
QT_MOC_LITERAL(6, 87, 27), // "ConnectionValidator::Status"
QT_MOC_LITERAL(7, 115, 6), // "status"
QT_MOC_LITERAL(8, 122, 6), // "errors"
QT_MOC_LITERAL(9, 129, 22), // "slotInvalidCredentials"
QT_MOC_LITERAL(10, 152, 22), // "slotCredentialsFetched"
QT_MOC_LITERAL(11, 175, 20), // "AbstractCredentials*"
QT_MOC_LITERAL(12, 196, 5), // "creds"
QT_MOC_LITERAL(13, 202, 20) // "slotCredentialsAsked"

    },
    "OCC::AccountState\0stateChanged\0\0state\0"
    "isConnectedChanged\0slotConnectionValidatorResult\0"
    "ConnectionValidator::Status\0status\0"
    "errors\0slotInvalidCredentials\0"
    "slotCredentialsFetched\0AbstractCredentials*\0"
    "creds\0slotCredentialsAsked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AccountState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   48,    2, 0x09 /* Protected */,
       9,    0,   53,    2, 0x09 /* Protected */,
      10,    1,   54,    2, 0x09 /* Protected */,
      13,    1,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QStringList,    7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void OCC::AccountState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountState *_t = static_cast<AccountState *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->isConnectedChanged(); break;
        case 2: _t->slotConnectionValidatorResult((*reinterpret_cast< ConnectionValidator::Status(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 3: _t->slotInvalidCredentials(); break;
        case 4: _t->slotCredentialsFetched((*reinterpret_cast< AbstractCredentials*(*)>(_a[1]))); break;
        case 5: _t->slotCredentialsAsked((*reinterpret_cast< AbstractCredentials*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractCredentials* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractCredentials* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccountState::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountState::stateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (AccountState::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountState::isConnectedChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::AccountState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__AccountState.data,
      qt_meta_data_OCC__AccountState,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::AccountState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountState::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AccountState.stringdata))
        return static_cast<void*>(const_cast< AccountState*>(this));
    if (!strcmp(_clname, "QSharedData"))
        return static_cast< QSharedData*>(const_cast< AccountState*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::AccountState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::AccountState::stateChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::AccountState::isConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
