/****************************************************************************
** Meta object code from reading C++ file 'Camera_positions_list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/Camera_positions_list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Camera_positions_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Camera_positions_list_t {
    QByteArrayData data[13];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_positions_list_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_positions_list_t qt_meta_stringdata_Camera_positions_list = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Camera_positions_list"
QT_MOC_LITERAL(1, 22, 4), // "load"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "filename"
QT_MOC_LITERAL(4, 37, 21), // "on_plusButton_pressed"
QT_MOC_LITERAL(5, 59, 22), // "on_minusButton_pressed"
QT_MOC_LITERAL(6, 82, 19), // "on_upButton_pressed"
QT_MOC_LITERAL(7, 102, 21), // "on_downButton_pressed"
QT_MOC_LITERAL(8, 124, 21), // "on_openButton_pressed"
QT_MOC_LITERAL(9, 146, 21), // "on_saveButton_pressed"
QT_MOC_LITERAL(10, 168, 22), // "on_clearButton_pressed"
QT_MOC_LITERAL(11, 191, 12), // "activatedRow"
QT_MOC_LITERAL(12, 204, 5) // "index"

    },
    "Camera_positions_list\0load\0\0filename\0"
    "on_plusButton_pressed\0on_minusButton_pressed\0"
    "on_upButton_pressed\0on_downButton_pressed\0"
    "on_openButton_pressed\0on_saveButton_pressed\0"
    "on_clearButton_pressed\0activatedRow\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera_positions_list[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    0,   62,    2, 0x09 /* Protected */,
       5,    0,   63,    2, 0x09 /* Protected */,
       6,    0,   64,    2, 0x09 /* Protected */,
       7,    0,   65,    2, 0x09 /* Protected */,
       8,    0,   66,    2, 0x09 /* Protected */,
       9,    0,   67,    2, 0x09 /* Protected */,
      10,    0,   68,    2, 0x09 /* Protected */,
      11,    1,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   12,

       0        // eod
};

void Camera_positions_list::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Camera_positions_list *_t = static_cast<Camera_positions_list *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->load((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_plusButton_pressed(); break;
        case 2: _t->on_minusButton_pressed(); break;
        case 3: _t->on_upButton_pressed(); break;
        case 4: _t->on_downButton_pressed(); break;
        case 5: _t->on_openButton_pressed(); break;
        case 6: _t->on_saveButton_pressed(); break;
        case 7: _t->on_clearButton_pressed(); break;
        case 8: _t->activatedRow((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Camera_positions_list::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_Camera_positions_list.data,
      qt_meta_data_Camera_positions_list,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Camera_positions_list::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera_positions_list::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Camera_positions_list.stringdata0))
        return static_cast<void*>(const_cast< Camera_positions_list*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int Camera_positions_list::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
