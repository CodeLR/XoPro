/****************************************************************************
** Meta object code from reading C++ file 'dialogxo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialogxo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogxo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogXo_t {
    QByteArrayData data[8];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogXo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogXo_t qt_meta_stringdata_DialogXo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DialogXo"
QT_MOC_LITERAL(1, 9, 7), // "signalX"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "signalO"
QT_MOC_LITERAL(4, 26, 21), // "signalChanegeComputer"
QT_MOC_LITERAL(5, 48, 7), // "ChangeX"
QT_MOC_LITERAL(6, 56, 7), // "ChangeO"
QT_MOC_LITERAL(7, 64, 14) // "ChangeComputer"

    },
    "DialogXo\0signalX\0\0signalO\0"
    "signalChanegeComputer\0ChangeX\0ChangeO\0"
    "ChangeComputer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogXo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogXo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogXo *_t = static_cast<DialogXo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalX(); break;
        case 1: _t->signalO(); break;
        case 2: _t->signalChanegeComputer(); break;
        case 3: _t->ChangeX(); break;
        case 4: _t->ChangeO(); break;
        case 5: _t->ChangeComputer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DialogXo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogXo::signalX)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DialogXo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogXo::signalO)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DialogXo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogXo::signalChanegeComputer)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DialogXo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogXo.data,
      qt_meta_data_DialogXo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogXo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogXo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogXo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogXo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DialogXo::signalX()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialogXo::signalO()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DialogXo::signalChanegeComputer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE