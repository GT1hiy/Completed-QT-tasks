/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "Clear",
    "",
    "slotUpWindows",
    "state",
    "slotDir",
    "FindNextImage",
    "std::pair<QPixmap,int>",
    "start_index",
    "direction",
    "GetImageByPath",
    "path",
    "slotResources",
    "on_btn_left_clicked",
    "on_btn_right_clicked",
    "slotCustomMenuRequested",
    "pos"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[6];
    char stringdata5[8];
    char stringdata6[14];
    char stringdata7[23];
    char stringdata8[12];
    char stringdata9[10];
    char stringdata10[15];
    char stringdata11[5];
    char stringdata12[14];
    char stringdata13[20];
    char stringdata14[21];
    char stringdata15[24];
    char stringdata16[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 5),  // "Clear"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 13),  // "slotUpWindows"
        QT_MOC_LITERAL(32, 5),  // "state"
        QT_MOC_LITERAL(38, 7),  // "slotDir"
        QT_MOC_LITERAL(46, 13),  // "FindNextImage"
        QT_MOC_LITERAL(60, 22),  // "std::pair<QPixmap,int>"
        QT_MOC_LITERAL(83, 11),  // "start_index"
        QT_MOC_LITERAL(95, 9),  // "direction"
        QT_MOC_LITERAL(105, 14),  // "GetImageByPath"
        QT_MOC_LITERAL(120, 4),  // "path"
        QT_MOC_LITERAL(125, 13),  // "slotResources"
        QT_MOC_LITERAL(139, 19),  // "on_btn_left_clicked"
        QT_MOC_LITERAL(159, 20),  // "on_btn_right_clicked"
        QT_MOC_LITERAL(180, 23),  // "slotCustomMenuRequested"
        QT_MOC_LITERAL(204, 3)   // "pos"
    },
    "MainWindow",
    "Clear",
    "",
    "slotUpWindows",
    "state",
    "slotDir",
    "FindNextImage",
    "std::pair<QPixmap,int>",
    "start_index",
    "direction",
    "GetImageByPath",
    "path",
    "slotResources",
    "on_btn_left_clicked",
    "on_btn_right_clicked",
    "slotCustomMenuRequested",
    "pos"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    1,   69,    2, 0x08,    2 /* Private */,
       5,    1,   72,    2, 0x08,    4 /* Private */,
       6,    2,   75,    2, 0x108,    6 /* Private | MethodIsConst  */,
      10,    1,   80,    2, 0x108,    9 /* Private | MethodIsConst  */,
      12,    1,   83,    2, 0x08,   11 /* Private */,
      13,    0,   86,    2, 0x08,   13 /* Private */,
      14,    0,   87,    2, 0x08,   14 /* Private */,
      15,    1,   88,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    0x80000000 | 7, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::QPixmap, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'Clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUpWindows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'FindNextImage'
        QtPrivate::TypeAndForceComplete<std::pair<QPixmap,int>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'GetImageByPath'
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'slotResources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btn_left_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_right_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCustomMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Clear(); break;
        case 1: _t->slotUpWindows((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->slotDir((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: { std::pair<QPixmap,int> _r = _t->FindNextImage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< std::pair<QPixmap,int>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QPixmap _r = _t->GetImageByPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->slotResources((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_btn_left_clicked(); break;
        case 7: _t->on_btn_right_clicked(); break;
        case 8: _t->slotCustomMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
