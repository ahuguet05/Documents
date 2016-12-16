/****************************************************************************
** Meta object code from reading C++ file 'mainwindowcommercial.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gestion_demenagement/mainwindowcommercial.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowcommercial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindowCommercial[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      51,   21,   21,   21, 0x08,
      89,   21,   21,   21, 0x08,
     135,  129,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowCommercial[] = {
    "MainWindowCommercial\0\0"
    "on_actionQuitter_triggered()\0"
    "on_pushButtonAjouterDossier_clicked()\0"
    "on_pushButtonSupprimerDossier_clicked()\0"
    "index\0on_tableWidgetCommercial_clicked(QModelIndex)\0"
};

void MainWindowCommercial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindowCommercial *_t = static_cast<MainWindowCommercial *>(_o);
        switch (_id) {
        case 0: _t->on_actionQuitter_triggered(); break;
        case 1: _t->on_pushButtonAjouterDossier_clicked(); break;
        case 2: _t->on_pushButtonSupprimerDossier_clicked(); break;
        case 3: _t->on_tableWidgetCommercial_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindowCommercial::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindowCommercial::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowCommercial,
      qt_meta_data_MainWindowCommercial, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindowCommercial::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindowCommercial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindowCommercial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowCommercial))
        return static_cast<void*>(const_cast< MainWindowCommercial*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowCommercial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
