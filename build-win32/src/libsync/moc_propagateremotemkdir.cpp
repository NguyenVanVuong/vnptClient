/****************************************************************************
** Meta object code from reading C++ file 'propagateremotemkdir.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/libsync/propagateremotemkdir.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagateremotemkdir.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__PropagateRemoteMkdir_t {
    QByteArrayData data[7];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateRemoteMkdir_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateRemoteMkdir_t qt_meta_stringdata_OCC__PropagateRemoteMkdir = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OCC::PropagateRemoteMkdir"
QT_MOC_LITERAL(1, 26, 17), // "slotStartMkcolJob"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 20), // "slotMkcolJobFinished"
QT_MOC_LITERAL(4, 66, 14), // "propfindResult"
QT_MOC_LITERAL(5, 81, 13), // "propfindError"
QT_MOC_LITERAL(6, 95, 7) // "success"

    },
    "OCC::PropagateRemoteMkdir\0slotStartMkcolJob\0"
    "\0slotMkcolJobFinished\0propfindResult\0"
    "propfindError\0success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateRemoteMkdir[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::PropagateRemoteMkdir::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropagateRemoteMkdir *_t = static_cast<PropagateRemoteMkdir *>(_o);
        switch (_id) {
        case 0: _t->slotStartMkcolJob(); break;
        case 1: _t->slotMkcolJobFinished(); break;
        case 2: _t->propfindResult((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 3: _t->propfindError(); break;
        case 4: _t->success(); break;
        default: ;
        }
    }
}

const QMetaObject OCC::PropagateRemoteMkdir::staticMetaObject = {
    { &PropagateItemJob::staticMetaObject, qt_meta_stringdata_OCC__PropagateRemoteMkdir.data,
      qt_meta_data_OCC__PropagateRemoteMkdir,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropagateRemoteMkdir::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateRemoteMkdir::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateRemoteMkdir.stringdata))
        return static_cast<void*>(const_cast< PropagateRemoteMkdir*>(this));
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateRemoteMkdir::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
