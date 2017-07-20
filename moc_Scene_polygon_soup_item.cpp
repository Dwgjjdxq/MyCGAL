/****************************************************************************
** Meta object code from reading C++ file 'Scene_polygon_soup_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Scene_polygon_soup_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_polygon_soup_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_polygon_soup_item_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_polygon_soup_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_polygon_soup_item_t qt_meta_stringdata_Scene_polygon_soup_item = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Scene_polygon_soup_item"
QT_MOC_LITERAL(1, 24, 20), // "shuffle_orientations"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "orient"
QT_MOC_LITERAL(4, 53, 18), // "exportAsPolyhedron"
QT_MOC_LITERAL(5, 72, 11), // "Polyhedron*"
QT_MOC_LITERAL(6, 84, 10), // "inside_out"
QT_MOC_LITERAL(7, 95, 26), // "setDisplayNonManifoldEdges"
QT_MOC_LITERAL(8, 122, 23) // "displayNonManifoldEdges"

    },
    "Scene_polygon_soup_item\0shuffle_orientations\0"
    "\0orient\0exportAsPolyhedron\0Polyhedron*\0"
    "inside_out\0setDisplayNonManifoldEdges\0"
    "displayNonManifoldEdges"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_polygon_soup_item[] = {

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
       4,    1,   46,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,

       0        // eod
};

void Scene_polygon_soup_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_polygon_soup_item *_t = static_cast<Scene_polygon_soup_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shuffle_orientations(); break;
        case 1: { bool _r = _t->orient();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->exportAsPolyhedron((*reinterpret_cast< Polyhedron*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->inside_out(); break;
        case 4: _t->setDisplayNonManifoldEdges((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->displayNonManifoldEdges();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Scene_polygon_soup_item::staticMetaObject = {
    { &Scene_item::staticMetaObject, qt_meta_stringdata_Scene_polygon_soup_item.data,
      qt_meta_data_Scene_polygon_soup_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene_polygon_soup_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_polygon_soup_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_polygon_soup_item.stringdata0))
        return static_cast<void*>(const_cast< Scene_polygon_soup_item*>(this));
    return Scene_item::qt_metacast(_clname);
}

int Scene_polygon_soup_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
