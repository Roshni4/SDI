/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Qt-CNN-labeling/view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_View_t {
    QByteArrayData data[16];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_View_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_View_t qt_meta_stringdata_View = {
    {
QT_MOC_LITERAL(0, 0, 4), // "View"
QT_MOC_LITERAL(1, 5, 29), // "on_selectFolderButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 27), // "on_selectFileButton_clicked"
QT_MOC_LITERAL(4, 64, 21), // "on_sortButton_clicked"
QT_MOC_LITERAL(5, 86, 22), // "on_sortButton2_clicked"
QT_MOC_LITERAL(6, 109, 36), // "on_imageNamesList_currentItem..."
QT_MOC_LITERAL(7, 146, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 163, 7), // "current"
QT_MOC_LITERAL(9, 171, 26), // "on_shapeDrawButton_clicked"
QT_MOC_LITERAL(10, 198, 32), // "on_shapesList_currentItemChanged"
QT_MOC_LITERAL(11, 231, 23), // "on_zoomInButton_clicked"
QT_MOC_LITERAL(12, 255, 24), // "on_zoomOutButton_clicked"
QT_MOC_LITERAL(13, 280, 26), // "on_copyPasteButton_clicked"
QT_MOC_LITERAL(14, 307, 23), // "on_resizeButton_clicked"
QT_MOC_LITERAL(15, 331, 21) // "on_saveButton_clicked"

    },
    "View\0on_selectFolderButton_clicked\0\0"
    "on_selectFileButton_clicked\0"
    "on_sortButton_clicked\0on_sortButton2_clicked\0"
    "on_imageNamesList_currentItemChanged\0"
    "QListWidgetItem*\0current\0"
    "on_shapeDrawButton_clicked\0"
    "on_shapesList_currentItemChanged\0"
    "on_zoomInButton_clicked\0"
    "on_zoomOutButton_clicked\0"
    "on_copyPasteButton_clicked\0"
    "on_resizeButton_clicked\0on_saveButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_selectFolderButton_clicked(); break;
        case 1: _t->on_selectFileButton_clicked(); break;
        case 2: _t->on_sortButton_clicked(); break;
        case 3: _t->on_sortButton2_clicked(); break;
        case 4: _t->on_imageNamesList_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_shapeDrawButton_clicked(); break;
        case 6: _t->on_shapesList_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_zoomInButton_clicked(); break;
        case 8: _t->on_zoomOutButton_clicked(); break;
        case 9: _t->on_copyPasteButton_clicked(); break;
        case 10: _t->on_resizeButton_clicked(); break;
        case 11: _t->on_saveButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject View::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_View.data,
    qt_meta_data_View,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_View.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
