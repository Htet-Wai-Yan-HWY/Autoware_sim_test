/****************************************************************************
** Meta object code from reading C++ file 'third_person_view_tool.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/autoware/src/universe/autoware.universe/common/tier4_camera_view_rviz_plugin/src/third_person_view_tool.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'third_person_view_tool.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tier4_camera_view_rviz_plugin__ThirdPersonViewTool_t {
    QByteArrayData data[7];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tier4_camera_view_rviz_plugin__ThirdPersonViewTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tier4_camera_view_rviz_plugin__ThirdPersonViewTool_t qt_meta_stringdata_tier4_camera_view_rviz_plugin__ThirdPersonViewTool = {
    {
QT_MOC_LITERAL(0, 0, 50), // "tier4_camera_view_rviz_plugin..."
QT_MOC_LITERAL(1, 51, 9), // "setOffset"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 8), // "setBoost"
QT_MOC_LITERAL(4, 71, 10), // "setFlyMode"
QT_MOC_LITERAL(5, 82, 15), // "setLeftHandMode"
QT_MOC_LITERAL(6, 98, 25) // "setFallbackViewController"

    },
    "tier4_camera_view_rviz_plugin::ThirdPersonViewTool\0"
    "setOffset\0\0setBoost\0setFlyMode\0"
    "setLeftHandMode\0setFallbackViewController"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tier4_camera_view_rviz_plugin__ThirdPersonViewTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tier4_camera_view_rviz_plugin::ThirdPersonViewTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThirdPersonViewTool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setOffset(); break;
        case 1: _t->setBoost(); break;
        case 2: _t->setFlyMode(); break;
        case 3: _t->setLeftHandMode(); break;
        case 4: _t->setFallbackViewController(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject tier4_camera_view_rviz_plugin::ThirdPersonViewTool::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Tool::staticMetaObject>(),
    qt_meta_stringdata_tier4_camera_view_rviz_plugin__ThirdPersonViewTool.data,
    qt_meta_data_tier4_camera_view_rviz_plugin__ThirdPersonViewTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tier4_camera_view_rviz_plugin::ThirdPersonViewTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tier4_camera_view_rviz_plugin::ThirdPersonViewTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tier4_camera_view_rviz_plugin__ThirdPersonViewTool.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Tool::qt_metacast(_clname);
}

int tier4_camera_view_rviz_plugin::ThirdPersonViewTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Tool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
