/****************************************************************************
** Meta object code from reading C++ file 'Scene_edit_polyhedron_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Scene_edit_polyhedron_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_edit_polyhedron_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_edit_polyhedron_item_t {
    QByteArrayData data[14];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_edit_polyhedron_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_edit_polyhedron_item_t qt_meta_stringdata_Scene_edit_polyhedron_item = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Scene_edit_polyhedron_item"
QT_MOC_LITERAL(1, 27, 18), // "invalidate_buffers"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "selected"
QT_MOC_LITERAL(4, 56, 35), // "std::set<Polyhedron::Vertex_h..."
QT_MOC_LITERAL(5, 92, 1), // "m"
QT_MOC_LITERAL(6, 94, 6), // "select"
QT_MOC_LITERAL(7, 101, 6), // "orig_x"
QT_MOC_LITERAL(8, 108, 6), // "orig_y"
QT_MOC_LITERAL(9, 115, 6), // "orig_z"
QT_MOC_LITERAL(10, 122, 5), // "dir_x"
QT_MOC_LITERAL(11, 128, 5), // "dir_y"
QT_MOC_LITERAL(12, 134, 5), // "dir_z"
QT_MOC_LITERAL(13, 140, 6) // "deform"

    },
    "Scene_edit_polyhedron_item\0"
    "invalidate_buffers\0\0selected\0"
    "std::set<Polyhedron::Vertex_handle>\0"
    "m\0select\0orig_x\0orig_y\0orig_z\0dir_x\0"
    "dir_y\0dir_z\0deform"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_edit_polyhedron_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    6,   38,    2, 0x0a /* Public */,
      13,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,   10,   11,   12,
    QMetaType::Void,

       0        // eod
};

void Scene_edit_polyhedron_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_edit_polyhedron_item *_t = static_cast<Scene_edit_polyhedron_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidate_buffers(); break;
        case 1: _t->selected((*reinterpret_cast< const std::set<Polyhedron::Vertex_handle>(*)>(_a[1]))); break;
        case 2: _t->select((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 3: _t->deform(); break;
        default: ;
        }
    }
}

const QMetaObject Scene_edit_polyhedron_item::staticMetaObject = {
    { &Scene_item::staticMetaObject, qt_meta_stringdata_Scene_edit_polyhedron_item.data,
      qt_meta_data_Scene_edit_polyhedron_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene_edit_polyhedron_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_edit_polyhedron_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_edit_polyhedron_item.stringdata0))
        return static_cast<void*>(const_cast< Scene_edit_polyhedron_item*>(this));
    return Scene_item::qt_metacast(_clname);
}

int Scene_edit_polyhedron_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene_item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
