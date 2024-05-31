/****************************************************************************
** Meta object code from reading C++ file 'navlistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../navlistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navlistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NavDelegate_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavDelegate_t qt_meta_stringdata_NavDelegate = {
    {
QT_MOC_LITERAL(0, 0, 11) // "NavDelegate"

    },
    "NavDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void NavDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NavDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_NavDelegate.data,
      qt_meta_data_NavDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NavDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int NavDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_NavModel_t {
    QByteArrayData data[9];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavModel_t qt_meta_stringdata_NavModel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "NavModel"
QT_MOC_LITERAL(1, 9, 8), // "readData"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "path"
QT_MOC_LITERAL(4, 24, 7), // "setData"
QT_MOC_LITERAL(5, 32, 8), // "listItem"
QT_MOC_LITERAL(6, 41, 8), // "collapse"
QT_MOC_LITERAL(7, 50, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 62, 5) // "index"

    },
    "NavModel\0readData\0\0path\0setData\0"
    "listItem\0collapse\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void NavModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavModel *_t = static_cast<NavModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setData((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->collapse((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NavModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_NavModel.data,
      qt_meta_data_NavModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NavModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int NavModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_NavListView_t {
    QByteArrayData data[25];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavListView_t qt_meta_stringdata_NavListView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "NavListView"
QT_MOC_LITERAL(1, 12, 8), // "readData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "xmlPath"
QT_MOC_LITERAL(4, 30, 7), // "setData"
QT_MOC_LITERAL(5, 38, 8), // "listItem"
QT_MOC_LITERAL(6, 47, 14), // "setInfoVisible"
QT_MOC_LITERAL(7, 62, 11), // "infoVisible"
QT_MOC_LITERAL(8, 74, 14), // "setLineVisible"
QT_MOC_LITERAL(9, 89, 11), // "lineVisible"
QT_MOC_LITERAL(10, 101, 13), // "setIcoColorBg"
QT_MOC_LITERAL(11, 115, 10), // "icoColorBg"
QT_MOC_LITERAL(12, 126, 11), // "setIcoStyle"
QT_MOC_LITERAL(13, 138, 8), // "IcoStyle"
QT_MOC_LITERAL(14, 147, 5), // "style"
QT_MOC_LITERAL(15, 153, 12), // "setColorLine"
QT_MOC_LITERAL(16, 166, 9), // "colorLine"
QT_MOC_LITERAL(17, 176, 10), // "setColorBg"
QT_MOC_LITERAL(18, 187, 13), // "colorBgNormal"
QT_MOC_LITERAL(19, 201, 15), // "colorBgSelected"
QT_MOC_LITERAL(20, 217, 12), // "colorBgHover"
QT_MOC_LITERAL(21, 230, 12), // "setColorText"
QT_MOC_LITERAL(22, 243, 15), // "colorTextNormal"
QT_MOC_LITERAL(23, 259, 17), // "colorTextSelected"
QT_MOC_LITERAL(24, 277, 14) // "colorTextHover"

    },
    "NavListView\0readData\0\0xmlPath\0setData\0"
    "listItem\0setInfoVisible\0infoVisible\0"
    "setLineVisible\0lineVisible\0setIcoColorBg\0"
    "icoColorBg\0setIcoStyle\0IcoStyle\0style\0"
    "setColorLine\0colorLine\0setColorBg\0"
    "colorBgNormal\0colorBgSelected\0"
    "colorBgHover\0setColorText\0colorTextNormal\0"
    "colorTextSelected\0colorTextHover"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavListView[] = {

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
       4,    1,   62,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
      10,    1,   71,    2, 0x0a /* Public */,
      12,    1,   74,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x0a /* Public */,
      17,    3,   80,    2, 0x0a /* Public */,
      21,    3,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor,   18,   19,   20,
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor,   22,   23,   24,

       0        // eod
};

void NavListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavListView *_t = static_cast<NavListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setData((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->setInfoVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setLineVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setIcoColorBg((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setIcoStyle((*reinterpret_cast< IcoStyle(*)>(_a[1]))); break;
        case 6: _t->setColorLine((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 7: _t->setColorBg((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 8: _t->setColorText((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NavListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_NavListView.data,
      qt_meta_data_NavListView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NavListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int NavListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
