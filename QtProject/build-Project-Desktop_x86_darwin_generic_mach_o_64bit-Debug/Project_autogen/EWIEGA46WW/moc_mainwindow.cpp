/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Downloads/dsba-itop2022-hw-master/QtProject/Project/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[36];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 10), // "addRowSlot"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 13), // "deleteRowSlot"
QT_MOC_LITERAL(37, 8), // "loadFile"
QT_MOC_LITERAL(46, 8), // "saveFile"
QT_MOC_LITERAL(55, 8), // "slotName"
QT_MOC_LITERAL(64, 11), // "QModelIndex"
QT_MOC_LITERAL(76, 5), // "index"
QT_MOC_LITERAL(82, 9), // "showAbout"
QT_MOC_LITERAL(92, 12), // "updateFilter"
QT_MOC_LITERAL(105, 4), // "text"
QT_MOC_LITERAL(110, 13), // "updateFilter2"
QT_MOC_LITERAL(124, 20), // "updateFilterMinDance"
QT_MOC_LITERAL(145, 5), // "value"
QT_MOC_LITERAL(151, 20), // "updateFilterMaxDance"
QT_MOC_LITERAL(172, 18), // "updateFromLineEdit"
QT_MOC_LITERAL(191, 16) // "updateToLineEdit"

    },
    "MainWindow\0addRowSlot\0\0deleteRowSlot\0"
    "loadFile\0saveFile\0slotName\0QModelIndex\0"
    "index\0showAbout\0updateFilter\0text\0"
    "updateFilter2\0updateFilterMinDance\0"
    "value\0updateFilterMaxDance\0"
    "updateFromLineEdit\0updateToLineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    1,   90,    2, 0x08,    5 /* Private */,
       9,    0,   93,    2, 0x08,    7 /* Private */,
      10,    1,   94,    2, 0x08,    8 /* Private */,
      12,    1,   97,    2, 0x08,   10 /* Private */,
      13,    1,  100,    2, 0x08,   12 /* Private */,
      15,    1,  103,    2, 0x08,   14 /* Private */,
      16,    1,  106,    2, 0x08,   16 /* Private */,
      17,    1,  109,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addRowSlot(); break;
        case 1: _t->deleteRowSlot(); break;
        case 2: _t->loadFile(); break;
        case 3: _t->saveFile(); break;
        case 4: _t->slotName((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->showAbout(); break;
        case 6: _t->updateFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateFilter2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updateFilterMinDance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateFilterMaxDance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateFromLineEdit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateToLineEdit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
