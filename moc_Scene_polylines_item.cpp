/****************************************************************************
** Meta object code from reading C++ file 'Scene_polylines_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Scene_polylines_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_polylines_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_polylines_item_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_polylines_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_polylines_item_t qt_meta_stringdata_Scene_polylines_item = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Scene_polylines_item"
QT_MOC_LITERAL(1, 21, 18), // "invalidate_buffers"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "change_corner_radii"
QT_MOC_LITERAL(4, 61, 21), // "split_at_sharp_angles"
QT_MOC_LITERAL(5, 83, 5), // "merge"
QT_MOC_LITERAL(6, 89, 21), // "Scene_polylines_item*"
QT_MOC_LITERAL(7, 111, 6) // "smooth"

    },
    "Scene_polylines_item\0invalidate_buffers\0"
    "\0change_corner_radii\0split_at_sharp_angles\0"
    "merge\0Scene_polylines_item*\0smooth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_polylines_item[] = {

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
       3,    1,   45,    2, 0x0a /* Public */,
       3,    0,   48,    2, 0x0a /* Public */,
       4,    0,   49,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

       0        // eod
};

void Scene_polylines_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_polylines_item *_t = static_cast<Scene_polylines_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidate_buffers(); break;
        case 1: _t->change_corner_radii((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->change_corner_radii(); break;
        case 3: _t->split_at_sharp_angles(); break;
        case 4: _t->merge((*reinterpret_cast< Scene_polylines_item*(*)>(_a[1]))); break;
        case 5: _t->smooth(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Scene_polylines_item* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Scene_polylines_item::staticMetaObject = {
    { &Scene_item::staticMetaObject, qt_meta_stringdata_Scene_polylines_item.data,
      qt_meta_data_Scene_polylines_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene_polylines_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_polylines_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_polylines_item.stringdata0))
        return static_cast<void*>(const_cast< Scene_polylines_item*>(this));
    return Scene_item::qt_metacast(_clname);
}

int Scene_polylines_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
