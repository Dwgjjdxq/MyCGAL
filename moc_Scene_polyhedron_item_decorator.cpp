/****************************************************************************
** Meta object code from reading C++ file 'Scene_polyhedron_item_decorator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Scene_polyhedron_item_decorator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_polyhedron_item_decorator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_polyhedron_item_decorator_t {
    QByteArrayData data[10];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_polyhedron_item_decorator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_polyhedron_item_decorator_t qt_meta_stringdata_Scene_polyhedron_item_decorator = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Scene_polyhedron_item_decorator"
QT_MOC_LITERAL(1, 32, 18), // "invalidate_buffers"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 6), // "select"
QT_MOC_LITERAL(4, 59, 6), // "orig_x"
QT_MOC_LITERAL(5, 66, 6), // "orig_y"
QT_MOC_LITERAL(6, 73, 6), // "orig_z"
QT_MOC_LITERAL(7, 80, 5), // "dir_x"
QT_MOC_LITERAL(8, 86, 5), // "dir_y"
QT_MOC_LITERAL(9, 92, 5) // "dir_z"

    },
    "Scene_polyhedron_item_decorator\0"
    "invalidate_buffers\0\0select\0orig_x\0"
    "orig_y\0orig_z\0dir_x\0dir_y\0dir_z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_polyhedron_item_decorator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    6,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,

       0        // eod
};

void Scene_polyhedron_item_decorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_polyhedron_item_decorator *_t = static_cast<Scene_polyhedron_item_decorator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidate_buffers(); break;
        case 1: _t->select((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        default: ;
        }
    }
}

const QMetaObject Scene_polyhedron_item_decorator::staticMetaObject = {
    { &Scene_item::staticMetaObject, qt_meta_stringdata_Scene_polyhedron_item_decorator.data,
      qt_meta_data_Scene_polyhedron_item_decorator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene_polyhedron_item_decorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_polyhedron_item_decorator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_polyhedron_item_decorator.stringdata0))
        return static_cast<void*>(const_cast< Scene_polyhedron_item_decorator*>(this));
    return Scene_item::qt_metacast(_clname);
}

int Scene_polyhedron_item_decorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene_item::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
