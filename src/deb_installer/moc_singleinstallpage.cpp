/****************************************************************************
** Meta object code from reading C++ file 'singleinstallpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "singleinstallpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singleinstallpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SingleInstallPage_t {
    QByteArrayData data[15];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleInstallPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleInstallPage_t qt_meta_stringdata_SingleInstallPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SingleInstallPage"
QT_MOC_LITERAL(1, 18, 4), // "back"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 23), // "requestUninstallConfirm"
QT_MOC_LITERAL(4, 48, 23), // "uninstallCurrentPackage"
QT_MOC_LITERAL(5, 72, 7), // "install"
QT_MOC_LITERAL(6, 80, 9), // "reinstall"
QT_MOC_LITERAL(7, 90, 14), // "showInfomation"
QT_MOC_LITERAL(8, 105, 14), // "hideInfomation"
QT_MOC_LITERAL(9, 120, 8), // "showInfo"
QT_MOC_LITERAL(10, 129, 17), // "onOutputAvailable"
QT_MOC_LITERAL(11, 147, 6), // "output"
QT_MOC_LITERAL(12, 154, 16), // "onWorkerFinished"
QT_MOC_LITERAL(13, 171, 23), // "onWorkerProgressChanged"
QT_MOC_LITERAL(14, 195, 8) // "progress"

    },
    "SingleInstallPage\0back\0\0requestUninstallConfirm\0"
    "uninstallCurrentPackage\0install\0"
    "reinstall\0showInfomation\0hideInfomation\0"
    "showInfo\0onOutputAvailable\0output\0"
    "onWorkerFinished\0onWorkerProgressChanged\0"
    "progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleInstallPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void SingleInstallPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleInstallPage *_t = static_cast<SingleInstallPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->requestUninstallConfirm(); break;
        case 2: _t->uninstallCurrentPackage(); break;
        case 3: _t->install(); break;
        case 4: _t->reinstall(); break;
        case 5: _t->showInfomation(); break;
        case 6: _t->hideInfomation(); break;
        case 7: _t->showInfo(); break;
        case 8: _t->onOutputAvailable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onWorkerFinished(); break;
        case 10: _t->onWorkerProgressChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SingleInstallPage::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleInstallPage::back)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SingleInstallPage::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleInstallPage::requestUninstallConfirm)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SingleInstallPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SingleInstallPage.data,
      qt_meta_data_SingleInstallPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SingleInstallPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleInstallPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleInstallPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SingleInstallPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SingleInstallPage::back()const
{
    QMetaObject::activate(const_cast< SingleInstallPage *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SingleInstallPage::requestUninstallConfirm()const
{
    QMetaObject::activate(const_cast< SingleInstallPage *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
