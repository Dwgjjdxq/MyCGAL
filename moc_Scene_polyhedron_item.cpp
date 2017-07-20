/****************************************************************************
** Meta object code from reading C++ file 'Scene_polyhedron_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Scene_polyhedron_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_polyhedron_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_polyhedron_item_t {
    QByteArrayData data[26];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_polyhedron_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_polyhedron_item_t qt_meta_stringdata_Scene_polyhedron_item = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Scene_polyhedron_item"
QT_MOC_LITERAL(1, 22, 15), // "selected_vertex"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "selected_facet"
QT_MOC_LITERAL(4, 54, 13), // "selected_edge"
QT_MOC_LITERAL(5, 68, 17), // "selected_halfedge"
QT_MOC_LITERAL(6, 86, 27), // "item_is_about_to_be_changed"
QT_MOC_LITERAL(7, 114, 18), // "invalidate_buffers"
QT_MOC_LITERAL(8, 133, 18), // "contextual_changed"
QT_MOC_LITERAL(9, 152, 17), // "selection_changed"
QT_MOC_LITERAL(10, 170, 8), // "setColor"
QT_MOC_LITERAL(11, 179, 1), // "c"
QT_MOC_LITERAL(12, 181, 23), // "show_only_feature_edges"
QT_MOC_LITERAL(13, 205, 21), // "enable_facets_picking"
QT_MOC_LITERAL(14, 227, 27), // "set_erase_next_picked_facet"
QT_MOC_LITERAL(15, 255, 6), // "select"
QT_MOC_LITERAL(16, 262, 6), // "orig_x"
QT_MOC_LITERAL(17, 269, 6), // "orig_y"
QT_MOC_LITERAL(18, 276, 6), // "orig_z"
QT_MOC_LITERAL(19, 283, 5), // "dir_x"
QT_MOC_LITERAL(20, 289, 5), // "dir_y"
QT_MOC_LITERAL(21, 295, 5), // "dir_z"
QT_MOC_LITERAL(22, 301, 21), // "update_vertex_indices"
QT_MOC_LITERAL(23, 323, 20), // "update_facet_indices"
QT_MOC_LITERAL(24, 344, 23), // "update_halfedge_indices"
QT_MOC_LITERAL(25, 368, 20) // "invalidate_aabb_tree"

    },
    "Scene_polyhedron_item\0selected_vertex\0"
    "\0selected_facet\0selected_edge\0"
    "selected_halfedge\0item_is_about_to_be_changed\0"
    "invalidate_buffers\0contextual_changed\0"
    "selection_changed\0setColor\0c\0"
    "show_only_feature_edges\0enable_facets_picking\0"
    "set_erase_next_picked_facet\0select\0"
    "orig_x\0orig_y\0orig_z\0dir_x\0dir_y\0dir_z\0"
    "update_vertex_indices\0update_facet_indices\0"
    "update_halfedge_indices\0invalidate_aabb_tree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_polyhedron_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    1,  102,    2, 0x06 /* Public */,
       4,    1,  105,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       6,    0,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  112,    2, 0x0a /* Public */,
       8,    0,  113,    2, 0x0a /* Public */,
       9,    1,  114,    2, 0x0a /* Public */,
      10,    1,  117,    2, 0x0a /* Public */,
      12,    1,  120,    2, 0x0a /* Public */,
      13,    1,  123,    2, 0x0a /* Public */,
      14,    1,  126,    2, 0x0a /* Public */,
      15,    6,  129,    2, 0x0a /* Public */,
      22,    0,  142,    2, 0x0a /* Public */,
      23,    0,  143,    2, 0x0a /* Public */,
      24,    0,  144,    2, 0x0a /* Public */,
      25,    0,  145,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   16,   17,   18,   19,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scene_polyhedron_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_polyhedron_item *_t = static_cast<Scene_polyhedron_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected_vertex((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 1: _t->selected_facet((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 2: _t->selected_edge((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->selected_halfedge((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 4: _t->item_is_about_to_be_changed(); break;
        case 5: _t->invalidate_buffers(); break;
        case 6: _t->contextual_changed(); break;
        case 7: _t->selection_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 9: _t->show_only_feature_edges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->enable_facets_picking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->set_erase_next_picked_facet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->select((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 13: _t->update_vertex_indices(); break;
        case 14: _t->update_facet_indices(); break;
        case 15: _t->update_halfedge_indices(); break;
        case 16: _t->invalidate_aabb_tree(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scene_polyhedron_item::*_t)(void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item::selected_vertex)) {
                *result = 0;
            }
        }
        {
            typedef void (Scene_polyhedron_item::*_t)(void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item::selected_facet)) {
                *result = 1;
            }
        }
        {
            typedef void (Scene_polyhedron_item::*_t)(void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item::selected_edge)) {
                *result = 2;
            }
        }
        {
            typedef void (Scene_polyhedron_item::*_t)(void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item::selected_halfedge)) {
                *result = 3;
            }
        }
        {
            typedef void (Scene_polyhedron_item::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene_polyhedron_item::item_is_about_to_be_changed)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject Scene_polyhedron_item::staticMetaObject = {
    { &Scene_item::staticMetaObject, qt_meta_stringdata_Scene_polyhedron_item.data,
      qt_meta_data_Scene_polyhedron_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene_polyhedron_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_polyhedron_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_polyhedron_item.stringdata0))
        return static_cast<void*>(const_cast< Scene_polyhedron_item*>(this));
    return Scene_item::qt_metacast(_clname);
}

int Scene_polyhedron_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene_item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Scene_polyhedron_item::selected_vertex(void * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scene_polyhedron_item::selected_facet(void * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Scene_polyhedron_item::selected_edge(void * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Scene_polyhedron_item::selected_halfedge(void * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Scene_polyhedron_item::item_is_about_to_be_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
