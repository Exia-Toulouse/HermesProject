/****************************************************************************
** Meta object code from reading C++ file 'parserrunnable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/parserrunnable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parserrunnable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QJson__ParserRunnable_t {
    QByteArrayData data[6];
    char stringdata[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QJson__ParserRunnable_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QJson__ParserRunnable_t qt_meta_stringdata_QJson__ParserRunnable = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 15),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 4),
QT_MOC_LITERAL(4, 44, 2),
QT_MOC_LITERAL(5, 47, 9)
    },
    "QJson::ParserRunnable\0parsingFinished\0"
    "\0json\0ok\0error_msg\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJson__ParserRunnable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x05,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::QString,    3,    4,    5,

       0        // eod
};

void QJson::ParserRunnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParserRunnable *_t = static_cast<ParserRunnable *>(_o);
        switch (_id) {
        case 0: _t->parsingFinished((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParserRunnable::*_t)(const QVariant & , bool , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParserRunnable::parsingFinished)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QJson::ParserRunnable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJson__ParserRunnable.data,
      qt_meta_data_QJson__ParserRunnable,  qt_static_metacall, 0, 0}
};


const QMetaObject *QJson::ParserRunnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJson::ParserRunnable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJson__ParserRunnable.stringdata))
        return static_cast<void*>(const_cast< ParserRunnable*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< ParserRunnable*>(this));
    return QObject::qt_metacast(_clname);
}

int QJson::ParserRunnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QJson::ParserRunnable::parsingFinished(const QVariant & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE