/****************************************************************************
** Meta object code from reading C++ file 'Scene_polyhedron_selection_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Scene_polyhedron_selection_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_polyhedron_selection_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_polyhedron_selection_item_t {
    QByteArrayData data[12];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_polyhedron_selection_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_polyhedron_selection_item_t qt_meta_stringdata_Scene_polyhedron_selection_item = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Scene_polyhedron_selection_item"
QT_MOC_LITERAL(1, 32, 17), // "simplicesSelected"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "Scene_item*"
QT_MOC_LITERAL(4, 63, 18), // "invalidate_buffers"
QT_MOC_LITERAL(5, 82, 8), // "selected"
QT_MOC_LITERAL(6, 91, 35), // "std::set<Polyhedron::Vertex_h..."
QT_MOC_LITERAL(7, 127, 1), // "m"
QT_MOC_LITERAL(8, 129, 34), // "std::set<Polyhedron::Facet_ha..."
QT_MOC_LITERAL(9, 164, 25), // "std::set<edge_descriptor>"
QT_MOC_LITERAL(10, 190, 17), // "poly_item_changed"
QT_MOC_LITERAL(11, 208, 12) // "endSelection"

    },
    "Scene_polyhedron_selection_item\0"
    "simplicesSelected\0\0Scene_item*\0"
    "invalidate_buffers\0selected\0"
    "std::set<Polyhedron::Vertex_handle>\0"
    "m\0std::set<Polyhedron::Facet_handle>\0"
    "std::set<edge_descriptor>\0poly_item_changed\0"
    "endSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_polyhedron_selection_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       5,    1,   56,    2, 0x0a /* Public */,
       5,    1,   59,    2, 0x0a /* Public */,
      10,    0,   62,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 8,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scene_polyhedron_selection_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_polyhedron_selection_item *_t = static_cast<Scene_polyhedron_selection_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simplicesSelected((*reinterpret_cast< Scene_item*(*)>(_a[1]))); break;
        case 1: _t->invalidate_buffers(); break;
        case 2: _t->selected((*reinterpret_cast< const std::set<Polyhedron::Vertex_handle>(*)>(_a[1]))); break;
        case 3: _t->selected((*reinterpret_cast< const std::set<Polyhedron::Facet_handle>(*)>(_a[1]))); break;
        case 4: _t->selected((*reinterpret_cast< const std::set<edge_descriptor>(*)>(_a[1]))); break;
        case 5: _t->poly_item_changed(); break;
        case 6: _t->endSelection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Scene_item* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scene_polyhedron_selection_item::*_t)(Scene_item * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_selection_item::simplicesSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Scene_polyhedron_selection_item::staticMetaObject = {
    { &Scene_polyhedron_item_decorator::staticMetaObject, qt_meta_stringdata_Scene_polyhedron_selection_item.data,
      qt_meta_data_Scene_polyhedron_selection_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene_polyhedron_selection_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_polyhedron_selection_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_polyhedron_selection_item.stringdata0))
        return static_cast<void*>(const_cast< Scene_polyhedron_selection_item*>(this));
    return Scene_polyhedron_item_decorator::qt_metacast(_clname);
}

int Scene_polyhedron_selection_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene_polyhedron_item_decorator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Scene_polyhedron_selection_item::simplicesSelected(Scene_item * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
