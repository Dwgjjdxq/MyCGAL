/****************************************************************************
** Meta object code from reading C++ file 'Scene_combinatorial_map_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Scene_combinatorial_map_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_combinatorial_map_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_combinatorial_map_item_t {
    QByteArrayData data[8];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_combinatorial_map_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_combinatorial_map_item_t qt_meta_stringdata_Scene_combinatorial_map_item = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Scene_combinatorial_map_item"
QT_MOC_LITERAL(1, 29, 15), // "set_next_volume"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 35), // "export_current_volume_as_poly..."
QT_MOC_LITERAL(4, 82, 26), // "export_union_as_polyhedron"
QT_MOC_LITERAL(5, 109, 33), // "export_intersection_as_polyhe..."
QT_MOC_LITERAL(6, 143, 30), // "export_A_minus_B_as_polyhedron"
QT_MOC_LITERAL(7, 174, 30) // "export_B_minus_A_as_polyhedron"

    },
    "Scene_combinatorial_map_item\0"
    "set_next_volume\0\0export_current_volume_as_polyhedron\0"
    "export_union_as_polyhedron\0"
    "export_intersection_as_polyhedron\0"
    "export_A_minus_B_as_polyhedron\0"
    "export_B_minus_A_as_polyhedron"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_combinatorial_map_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scene_combinatorial_map_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_combinatorial_map_item *_t = static_cast<Scene_combinatorial_map_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_next_volume(); break;
        case 1: _t->export_current_volume_as_polyhedron(); break;
        case 2: _t->export_union_as_polyhedron(); break;
        case 3: _t->export_intersection_as_polyhedron(); break;
        case 4: _t->export_A_minus_B_as_polyhedron(); break;
        case 5: _t->export_B_minus_A_as_polyhedron(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Scene_combinatorial_map_item::staticMetaObject = {
    { &Scene_item::staticMetaObject, qt_meta_stringdata_Scene_combinatorial_map_item.data,
      qt_meta_data_Scene_combinatorial_map_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene_combinatorial_map_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_combinatorial_map_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_combinatorial_map_item.stringdata0))
        return static_cast<void*>(const_cast< Scene_combinatorial_map_item*>(this));
    return Scene_item::qt_metacast(_clname);
}

int Scene_combinatorial_map_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene_item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
