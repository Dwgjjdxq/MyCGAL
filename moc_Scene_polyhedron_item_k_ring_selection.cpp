/****************************************************************************
** Meta object code from reading C++ file 'Scene_polyhedron_item_k_ring_selection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Scene_polyhedron_item_k_ring_selection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_polyhedron_item_k_ring_selection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_polyhedron_item_k_ring_selection_t {
    QByteArrayData data[11];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_polyhedron_item_k_ring_selection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_polyhedron_item_k_ring_selection_t qt_meta_stringdata_Scene_polyhedron_item_k_ring_selection = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Scene_polyhedron_item_k_ring_..."
QT_MOC_LITERAL(1, 39, 8), // "selected"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 35), // "std::set<Polyhedron::Vertex_h..."
QT_MOC_LITERAL(4, 85, 34), // "std::set<Polyhedron::Facet_ha..."
QT_MOC_LITERAL(5, 120, 25), // "std::set<edge_descriptor>"
QT_MOC_LITERAL(6, 146, 12), // "endSelection"
QT_MOC_LITERAL(7, 159, 24), // "vertex_has_been_selected"
QT_MOC_LITERAL(8, 184, 8), // "void_ptr"
QT_MOC_LITERAL(9, 193, 23), // "facet_has_been_selected"
QT_MOC_LITERAL(10, 217, 22) // "edge_has_been_selected"

    },
    "Scene_polyhedron_item_k_ring_selection\0"
    "selected\0\0std::set<Polyhedron::Vertex_handle>\0"
    "std::set<Polyhedron::Facet_handle>\0"
    "std::set<edge_descriptor>\0endSelection\0"
    "vertex_has_been_selected\0void_ptr\0"
    "facet_has_been_selected\0edge_has_been_selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_polyhedron_item_k_ring_selection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       1,    1,   52,    2, 0x06 /* Public */,
       1,    1,   55,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::VoidStar,    8,
    QMetaType::Void, QMetaType::VoidStar,    8,
    QMetaType::Void, QMetaType::VoidStar,    8,

       0        // eod
};

void Scene_polyhedron_item_k_ring_selection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_polyhedron_item_k_ring_selection *_t = static_cast<Scene_polyhedron_item_k_ring_selection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< const std::set<Polyhedron::Vertex_handle>(*)>(_a[1]))); break;
        case 1: _t->selected((*reinterpret_cast< const std::set<Polyhedron::Facet_handle>(*)>(_a[1]))); break;
        case 2: _t->selected((*reinterpret_cast< const std::set<edge_descriptor>(*)>(_a[1]))); break;
        case 3: _t->endSelection(); break;
        case 4: _t->vertex_has_been_selected((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 5: _t->facet_has_been_selected((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 6: _t->edge_has_been_selected((*reinterpret_cast< void*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scene_polyhedron_item_k_ring_selection::*_t)(const std::set<Polyhedron::Vertex_handle> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item_k_ring_selection::selected)) {
                *result = 0;
            }
        }
        {
            typedef void (Scene_polyhedron_item_k_ring_selection::*_t)(const std::set<Polyhedron::Facet_handle> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item_k_ring_selection::selected)) {
                *result = 1;
            }
        }
        {
            typedef void (Scene_polyhedron_item_k_ring_selection::*_t)(const std::set<edge_descriptor> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item_k_ring_selection::selected)) {
                *result = 2;
            }
        }
        {
            typedef void (Scene_polyhedron_item_k_ring_selection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item_k_ring_selection::endSelection)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Scene_polyhedron_item_k_ring_selection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Scene_polyhedron_item_k_ring_selection.data,
      qt_meta_data_Scene_polyhedron_item_k_ring_selection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene_polyhedron_item_k_ring_selection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_polyhedron_item_k_ring_selection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_polyhedron_item_k_ring_selection.stringdata0))
        return static_cast<void*>(const_cast< Scene_polyhedron_item_k_ring_selection*>(this));
    return QObject::qt_metacast(_clname);
}

int Scene_polyhedron_item_k_ring_selection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Scene_polyhedron_item_k_ring_selection::selected(const std::set<Polyhedron::Vertex_handle> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scene_polyhedron_item_k_ring_selection::selected(const std::set<Polyhedron::Facet_handle> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Scene_polyhedron_item_k_ring_selection::selected(const std::set<edge_descriptor> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Scene_polyhedron_item_k_ring_selection::endSelection()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
