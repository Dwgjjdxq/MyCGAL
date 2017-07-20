/****************************************************************************
** Meta object code from reading C++ file 'Viewer_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/CGAL_demo/Viewer_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Viewer_interface_t {
    QByteArrayData data[14];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Viewer_interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Viewer_interface_t qt_meta_stringdata_Viewer_interface = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Viewer_interface"
QT_MOC_LITERAL(1, 17, 8), // "selected"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "requestContextMenu"
QT_MOC_LITERAL(4, 46, 10), // "global_pos"
QT_MOC_LITERAL(5, 57, 13), // "selectedPoint"
QT_MOC_LITERAL(6, 71, 12), // "selectionRay"
QT_MOC_LITERAL(7, 84, 15), // "setAntiAliasing"
QT_MOC_LITERAL(8, 100, 1), // "b"
QT_MOC_LITERAL(9, 102, 11), // "setTwoSides"
QT_MOC_LITERAL(10, 114, 21), // "turnCameraBy180Degres"
QT_MOC_LITERAL(11, 136, 21), // "dumpCameraCoordinates"
QT_MOC_LITERAL(12, 158, 23), // "moveCameraToCoordinates"
QT_MOC_LITERAL(13, 182, 18) // "animation_duration"

    },
    "Viewer_interface\0selected\0\0"
    "requestContextMenu\0global_pos\0"
    "selectedPoint\0selectionRay\0setAntiAliasing\0"
    "b\0setTwoSides\0turnCameraBy180Degres\0"
    "dumpCameraCoordinates\0moveCameraToCoordinates\0"
    "animation_duration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Viewer_interface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       5,    3,   70,    2, 0x06 /* Public */,
       6,    6,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   90,    2, 0x0a /* Public */,
       9,    1,   93,    2, 0x0a /* Public */,
      10,    0,   96,    2, 0x0a /* Public */,
      11,    0,   97,    2, 0x0a /* Public */,
      12,    2,   98,    2, 0x0a /* Public */,
      12,    1,  103,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::Float,    2,   13,
    QMetaType::Bool, QMetaType::QString,    2,

       0        // eod
};

void Viewer_interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Viewer_interface *_t = static_cast<Viewer_interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->requestContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->selectedPoint((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->selectionRay((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 4: _t->setAntiAliasing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setTwoSides((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->turnCameraBy180Degres(); break;
        case 7: { QString _r = _t->dumpCameraCoordinates();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->moveCameraToCoordinates((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->moveCameraToCoordinates((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Viewer_interface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Viewer_interface::selected)) {
                *result = 0;
            }
        }
        {
            typedef void (Viewer_interface::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Viewer_interface::requestContextMenu)) {
                *result = 1;
            }
        }
        {
            typedef void (Viewer_interface::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Viewer_interface::selectedPoint)) {
                *result = 2;
            }
        }
        {
            typedef void (Viewer_interface::*_t)(double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Viewer_interface::selectionRay)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Viewer_interface::staticMetaObject = {
    { &QGLViewer::staticMetaObject, qt_meta_stringdata_Viewer_interface.data,
      qt_meta_data_Viewer_interface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Viewer_interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Viewer_interface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Viewer_interface.stringdata0))
        return static_cast<void*>(const_cast< Viewer_interface*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions_2_1"))
        return static_cast< QOpenGLFunctions_2_1*>(const_cast< Viewer_interface*>(this));
    return QGLViewer::qt_metacast(_clname);
}

int Viewer_interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Viewer_interface::selected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Viewer_interface::requestContextMenu(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Viewer_interface::selectedPoint(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Viewer_interface::selectionRay(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
