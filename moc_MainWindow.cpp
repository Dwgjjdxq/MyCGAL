/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CGAL-4.7/demo/Polyhedron/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[70];
    char stringdata0[1233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "updateViewerBBox"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "open"
QT_MOC_LITERAL(4, 34, 19), // "file_matches_filter"
QT_MOC_LITERAL(5, 54, 7), // "filters"
QT_MOC_LITERAL(6, 62, 8), // "filename"
QT_MOC_LITERAL(7, 71, 11), // "loader_name"
QT_MOC_LITERAL(8, 83, 11), // "reload_item"
QT_MOC_LITERAL(9, 95, 11), // "load_script"
QT_MOC_LITERAL(10, 107, 9), // "QFileInfo"
QT_MOC_LITERAL(11, 117, 21), // "setFocusToQuickSearch"
QT_MOC_LITERAL(12, 139, 15), // "selectSceneItem"
QT_MOC_LITERAL(13, 155, 1), // "i"
QT_MOC_LITERAL(14, 157, 17), // "showSelectedPoint"
QT_MOC_LITERAL(15, 175, 17), // "unSelectSceneItem"
QT_MOC_LITERAL(16, 193, 9), // "selectAll"
QT_MOC_LITERAL(17, 203, 23), // "addSceneItemInSelection"
QT_MOC_LITERAL(18, 227, 28), // "removeSceneItemFromSelection"
QT_MOC_LITERAL(19, 256, 31), // "setAddKeyFrameKeyboardModifiers"
QT_MOC_LITERAL(20, 288, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(21, 310, 9), // "clearMenu"
QT_MOC_LITERAL(22, 320, 6), // "QMenu*"
QT_MOC_LITERAL(23, 327, 9), // "addAction"
QT_MOC_LITERAL(24, 337, 8), // "QAction*"
QT_MOC_LITERAL(25, 346, 10), // "actionName"
QT_MOC_LITERAL(26, 357, 10), // "actionText"
QT_MOC_LITERAL(27, 368, 8), // "menuName"
QT_MOC_LITERAL(28, 377, 10), // "viewerShow"
QT_MOC_LITERAL(29, 388, 16), // "viewerShowObject"
QT_MOC_LITERAL(30, 405, 11), // "information"
QT_MOC_LITERAL(31, 417, 7), // "warning"
QT_MOC_LITERAL(32, 425, 5), // "error"
QT_MOC_LITERAL(33, 431, 7), // "message"
QT_MOC_LITERAL(34, 439, 9), // "hasPlugin"
QT_MOC_LITERAL(35, 449, 20), // "enableScriptDebugger"
QT_MOC_LITERAL(36, 470, 16), // "selectionChanged"
QT_MOC_LITERAL(37, 487, 20), // "contextMenuRequested"
QT_MOC_LITERAL(38, 508, 10), // "global_pos"
QT_MOC_LITERAL(39, 519, 20), // "showSceneContextMenu"
QT_MOC_LITERAL(40, 540, 17), // "selectedItemIndex"
QT_MOC_LITERAL(41, 558, 21), // "local_pos_of_treeview"
QT_MOC_LITERAL(42, 580, 10), // "updateInfo"
QT_MOC_LITERAL(43, 591, 17), // "updateDisplayInfo"
QT_MOC_LITERAL(44, 609, 22), // "removeManipulatedFrame"
QT_MOC_LITERAL(45, 632, 11), // "Scene_item*"
QT_MOC_LITERAL(46, 644, 4), // "quit"
QT_MOC_LITERAL(47, 649, 12), // "readSettings"
QT_MOC_LITERAL(48, 662, 13), // "writeSettings"
QT_MOC_LITERAL(49, 676, 27), // "on_actionEraseAll_triggered"
QT_MOC_LITERAL(50, 704, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(51, 728, 24), // "on_actionErase_triggered"
QT_MOC_LITERAL(52, 753, 28), // "on_actionDuplicate_triggered"
QT_MOC_LITERAL(53, 782, 30), // "on_actionLoad_Script_triggered"
QT_MOC_LITERAL(54, 813, 27), // "on_actionShowHide_triggered"
QT_MOC_LITERAL(55, 841, 33), // "on_actionSetPolyhedronA_trigg..."
QT_MOC_LITERAL(56, 875, 33), // "on_actionSetPolyhedronB_trigg..."
QT_MOC_LITERAL(57, 909, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(58, 940, 25), // "on_actionSaveAs_triggered"
QT_MOC_LITERAL(59, 966, 4), // "save"
QT_MOC_LITERAL(60, 971, 4), // "item"
QT_MOC_LITERAL(61, 976, 31), // "on_actionSaveSnapshot_triggered"
QT_MOC_LITERAL(62, 1008, 37), // "on_actionSetBackgroundColor_t..."
QT_MOC_LITERAL(63, 1046, 27), // "on_action_Look_at_triggered"
QT_MOC_LITERAL(64, 1074, 13), // "camera_string"
QT_MOC_LITERAL(65, 1088, 29), // "on_actionDumpCamera_triggered"
QT_MOC_LITERAL(66, 1118, 31), // "on_action_Copy_camera_triggered"
QT_MOC_LITERAL(67, 1150, 32), // "on_action_Paste_camera_triggered"
QT_MOC_LITERAL(68, 1183, 16), // "filterOperations"
QT_MOC_LITERAL(69, 1200, 32) // "on_actionRecenterScene_triggered"

    },
    "MainWindow\0updateViewerBBox\0\0open\0"
    "file_matches_filter\0filters\0filename\0"
    "loader_name\0reload_item\0load_script\0"
    "QFileInfo\0setFocusToQuickSearch\0"
    "selectSceneItem\0i\0showSelectedPoint\0"
    "unSelectSceneItem\0selectAll\0"
    "addSceneItemInSelection\0"
    "removeSceneItemFromSelection\0"
    "setAddKeyFrameKeyboardModifiers\0"
    "Qt::KeyboardModifiers\0clearMenu\0QMenu*\0"
    "addAction\0QAction*\0actionName\0actionText\0"
    "menuName\0viewerShow\0viewerShowObject\0"
    "information\0warning\0error\0message\0"
    "hasPlugin\0enableScriptDebugger\0"
    "selectionChanged\0contextMenuRequested\0"
    "global_pos\0showSceneContextMenu\0"
    "selectedItemIndex\0local_pos_of_treeview\0"
    "updateInfo\0updateDisplayInfo\0"
    "removeManipulatedFrame\0Scene_item*\0"
    "quit\0readSettings\0writeSettings\0"
    "on_actionEraseAll_triggered\0"
    "on_actionLoad_triggered\0"
    "on_actionErase_triggered\0"
    "on_actionDuplicate_triggered\0"
    "on_actionLoad_Script_triggered\0"
    "on_actionShowHide_triggered\0"
    "on_actionSetPolyhedronA_triggered\0"
    "on_actionSetPolyhedronB_triggered\0"
    "on_actionPreferences_triggered\0"
    "on_actionSaveAs_triggered\0save\0item\0"
    "on_actionSaveSnapshot_triggered\0"
    "on_actionSetBackgroundColor_triggered\0"
    "on_action_Look_at_triggered\0camera_string\0"
    "on_actionDumpCamera_triggered\0"
    "on_action_Copy_camera_triggered\0"
    "on_action_Paste_camera_triggered\0"
    "filterOperations\0on_actionRecenterScene_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  309,    2, 0x0a /* Public */,
       3,    1,  310,    2, 0x0a /* Public */,
       4,    2,  313,    2, 0x0a /* Public */,
       3,    2,  318,    2, 0x0a /* Public */,
       8,    0,  323,    2, 0x0a /* Public */,
       9,    1,  324,    2, 0x0a /* Public */,
       9,    1,  327,    2, 0x0a /* Public */,
      11,    0,  330,    2, 0x0a /* Public */,
      12,    1,  331,    2, 0x0a /* Public */,
      14,    3,  334,    2, 0x0a /* Public */,
      15,    1,  341,    2, 0x0a /* Public */,
      16,    0,  344,    2, 0x0a /* Public */,
      17,    1,  345,    2, 0x0a /* Public */,
      18,    1,  348,    2, 0x0a /* Public */,
      19,    1,  351,    2, 0x0a /* Public */,
      21,    1,  354,    2, 0x0a /* Public */,
      23,    1,  357,    2, 0x0a /* Public */,
      23,    3,  360,    2, 0x0a /* Public */,
      28,    3,  367,    2, 0x0a /* Public */,
      28,    6,  374,    2, 0x0a /* Public */,
      29,    0,  387,    2, 0x0a /* Public */,
      30,    1,  388,    2, 0x0a /* Public */,
      31,    1,  391,    2, 0x0a /* Public */,
      32,    1,  394,    2, 0x0a /* Public */,
      33,    3,  397,    2, 0x0a /* Public */,
      33,    2,  404,    2, 0x2a /* Public | MethodCloned */,
      34,    1,  409,    2, 0x0a /* Public */,
      35,    1,  412,    2, 0x0a /* Public */,
      35,    0,  415,    2, 0x2a /* Public | MethodCloned */,
      36,    0,  416,    2, 0x09 /* Protected */,
      37,    1,  417,    2, 0x09 /* Protected */,
      39,    2,  420,    2, 0x09 /* Protected */,
      39,    1,  425,    2, 0x09 /* Protected */,
      42,    0,  428,    2, 0x09 /* Protected */,
      43,    0,  429,    2, 0x09 /* Protected */,
      44,    1,  430,    2, 0x09 /* Protected */,
      46,    0,  433,    2, 0x09 /* Protected */,
      47,    0,  434,    2, 0x09 /* Protected */,
      48,    0,  435,    2, 0x09 /* Protected */,
      49,    0,  436,    2, 0x09 /* Protected */,
      50,    0,  437,    2, 0x09 /* Protected */,
      51,    0,  438,    2, 0x09 /* Protected */,
      52,    0,  439,    2, 0x09 /* Protected */,
      53,    0,  440,    2, 0x09 /* Protected */,
      54,    0,  441,    2, 0x09 /* Protected */,
      55,    0,  442,    2, 0x09 /* Protected */,
      56,    0,  443,    2, 0x09 /* Protected */,
      57,    0,  444,    2, 0x09 /* Protected */,
      58,    0,  445,    2, 0x09 /* Protected */,
      59,    2,  446,    2, 0x09 /* Protected */,
      61,    0,  451,    2, 0x09 /* Protected */,
      62,    0,  452,    2, 0x09 /* Protected */,
      63,    0,  453,    2, 0x09 /* Protected */,
      64,    0,  454,    2, 0x09 /* Protected */,
      65,    0,  455,    2, 0x09 /* Protected */,
      66,    0,  456,    2, 0x09 /* Protected */,
      67,    0,  457,    2, 0x09 /* Protected */,
      68,    0,  458,    2, 0x09 /* Protected */,
      69,    0,  459,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Bool, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   26,   27,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::QPoint,   40,   38,
    QMetaType::Void, QMetaType::QPoint,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 45,    6,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateViewerBBox(); break;
        case 1: _t->open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->file_matches_filter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->open((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->reload_item(); break;
        case 5: { bool _r = _t->load_script((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->load_script((*reinterpret_cast< QFileInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setFocusToQuickSearch(); break;
        case 8: _t->selectSceneItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->showSelectedPoint((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 10: _t->unSelectSceneItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->selectAll(); break;
        case 12: _t->addSceneItemInSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->removeSceneItemFromSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setAddKeyFrameKeyboardModifiers((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 15: _t->clearMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 16: _t->addAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 17: _t->addAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 18: _t->viewerShow((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 19: _t->viewerShow((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 20: _t->viewerShowObject(); break;
        case 21: _t->information((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->warning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->message((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 25: _t->message((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 26: { bool _r = _t->hasPlugin((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->enableScriptDebugger((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->enableScriptDebugger(); break;
        case 29: _t->selectionChanged(); break;
        case 30: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 31: _t->showSceneContextMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 32: _t->showSceneContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 33: _t->updateInfo(); break;
        case 34: _t->updateDisplayInfo(); break;
        case 35: _t->removeManipulatedFrame((*reinterpret_cast< Scene_item*(*)>(_a[1]))); break;
        case 36: _t->quit(); break;
        case 37: _t->readSettings(); break;
        case 38: _t->writeSettings(); break;
        case 39: _t->on_actionEraseAll_triggered(); break;
        case 40: _t->on_actionLoad_triggered(); break;
        case 41: { bool _r = _t->on_actionErase_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: _t->on_actionDuplicate_triggered(); break;
        case 43: _t->on_actionLoad_Script_triggered(); break;
        case 44: _t->on_actionShowHide_triggered(); break;
        case 45: _t->on_actionSetPolyhedronA_triggered(); break;
        case 46: _t->on_actionSetPolyhedronB_triggered(); break;
        case 47: _t->on_actionPreferences_triggered(); break;
        case 48: _t->on_actionSaveAs_triggered(); break;
        case 49: _t->save((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Scene_item*(*)>(_a[2]))); break;
        case 50: _t->on_actionSaveSnapshot_triggered(); break;
        case 51: _t->on_actionSetBackgroundColor_triggered(); break;
        case 52: _t->on_action_Look_at_triggered(); break;
        case 53: { QString _r = _t->camera_string();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 54: _t->on_actionDumpCamera_triggered(); break;
        case 55: _t->on_action_Copy_camera_triggered(); break;
        case 56: _t->on_action_Paste_camera_triggered(); break;
        case 57: _t->filterOperations(); break;
        case 58: _t->on_actionRecenterScene_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &CGAL::Qt::DemosMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "Messages_interface"))
        return static_cast< Messages_interface*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "com.geometryfactory.PolyhedronDemo.MessagesInterface/1.0"))
        return static_cast< Messages_interface*>(const_cast< MainWindow*>(this));
    return CGAL::Qt::DemosMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::Qt::DemosMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
