#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,4,0,0,0,1,0,0,1,
32,0,2,0,0,0,11,0,0,0,11,0,0,0,134,0,
2,0,0,0,3,0,0,0,8,0,0,0,8,0,2,0,
0,0,3,0,0,0,5,0,0,1,10,0,0,0,0,0,
1,0,0,0,0,0,0,0,62,0,0,0,0,0,1,0,
0,0,0,0,0,0,100,0,0,0,0,0,1,0,0,0,
0,0,0,0,26,0,0,0,0,0,1,0,0,0,0,0,
0,0,194,0,0,0,0,0,1,0,0,0,0,0,0,0,
158,0,0,0,0,0,1,0,0,0,0,0,0,0,232,0,
0,0,0,0,1,0,0,0,0,0,0,1,244,0,0,0,
0,0,1,0,0,0,0,0,0,2,88,0,0,0,0,0,
1,0,0,0,0,0,0,1,152,0,0,0,0,0,1,0,
0,0,0,0,0,1,206,0,0,0,0,0,1,0,0,0,
0,0,0,2,46,0,0,0,0,0,1,0,0,0,0,0,
0,1,80,0,0,0,0,0,1,0,0,0,0,0,0,2,
18,0,0,0,0,0,1,0,0,0,0,0,0,1,180,0,
0,0,0,0,1,0,0,0,0,0,0,1,118,0,0,0,
0,0,1,0,0,0,0,0,0,1,48,0,0,0,0,0,
1,0,0,0,0,0,0,2,120,0,0,0,0,0,1,0,
0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,6,5,154,139,190,0,83,0,
99,0,114,0,101,0,101,0,110,0,15,11,41,30,28,0,
89,0,101,0,115,0,78,0,111,0,83,0,99,0,114,0,
101,0,101,0,110,0,46,0,113,0,109,0,108,0,16,4,
91,171,28,0,80,0,108,0,97,0,121,0,101,0,114,0,
83,0,99,0,114,0,101,0,101,0,110,0,46,0,113,0,
109,0,108,0,14,11,18,121,252,0,76,0,105,0,115,0,
116,0,83,0,99,0,114,0,101,0,101,0,110,0,46,0,
113,0,109,0,108,0,9,4,118,224,148,0,67,0,111,0,
109,0,112,0,111,0,110,0,101,0,110,0,116,0,15,6,
86,170,124,0,82,0,117,0,110,0,110,0,105,0,110,0,
103,0,84,0,101,0,120,0,116,0,46,0,113,0,109,0,
108,0,16,4,234,13,124,0,83,0,99,0,114,0,111,0,
108,0,108,0,115,0,101,0,97,0,114,0,99,0,104,0,
46,0,113,0,109,0,108,0,14,10,146,127,124,0,66,0,
97,0,115,0,101,0,66,0,117,0,116,0,116,0,111,0,
110,0,46,0,113,0,109,0,108,0,8,8,1,90,92,0,
109,0,97,0,105,0,110,0,46,0,113,0,109,0,108,0,
5,0,78,150,192,0,71,0,114,0,111,0,117,0,112,0,
13,11,244,70,220,0,83,0,101,0,97,0,114,0,99,0,
104,0,66,0,97,0,114,0,46,0,113,0,109,0,108,0,
16,7,132,101,124,0,77,0,117,0,115,0,105,0,99,0,
84,0,105,0,109,0,101,0,66,0,97,0,114,0,46,0,
113,0,109,0,108,0,14,11,175,159,92,0,82,0,111,0,
116,0,111,0,114,0,71,0,114,0,111,0,117,0,112,0,
46,0,113,0,109,0,108,0,11,6,80,77,28,0,67,0,
100,0,71,0,114,0,111,0,117,0,112,0,46,0,113,0,
109,0,108,0,10,8,142,27,60,0,84,0,97,0,98,0,
98,0,97,0,114,0,46,0,113,0,109,0,108,0,16,7,
29,172,92,0,80,0,108,0,97,0,121,0,101,0,114,0,
66,0,116,0,110,0,66,0,97,0,114,0,46,0,113,0,
109,0,108,0,12,1,192,40,252,0,67,0,108,0,101,0,
97,0,114,0,66,0,97,0,114,0,46,0,113,0,109,0,
108,0,11,8,34,223,28,0,77,0,101,0,110,0,117,0,
66,0,97,0,114,0,46,0,113,0,109,0,108,0,18,7,
97,159,28,0,82,0,117,0,110,0,110,0,105,0,110,0,
103,0,84,0,101,0,120,0,116,0,66,0,97,0,114,0,
46,0,113,0,109,0,108,0,13,2,66,210,124,0,86,0,
111,0,108,0,117,0,109,0,101,0,66,0,97,0,114,0,
46,0,113,0,109,0,108,0,13,14,144,17,124,0,83,0,
121,0,115,0,116,0,101,0,109,0,66,0,97,0,114,0,
46,0,113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _0x5f_Group_SystemBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_VolumeBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_RunningTextBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_MenuBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Component_BaseButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_ClearBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Screen_ListScreen_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_PlayerBtnBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_Tabbar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Screen_PlayerScreen_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_CdGroup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_RotorGroup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Component_Scrollsearch_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Screen_YesNoScreen_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_MusicTimeBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Component_RunningText_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_Group_SearchBar_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/SystemBar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_SystemBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/VolumeBar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_VolumeBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/RunningTextBar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_RunningTextBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/main.qml"), &QmlCacheGeneratedCode::_0x5f__main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/MenuBar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_MenuBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Component/BaseButton.qml"), &QmlCacheGeneratedCode::_0x5f_Component_BaseButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/ClearBar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_ClearBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Screen/ListScreen.qml"), &QmlCacheGeneratedCode::_0x5f_Screen_ListScreen_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/PlayerBtnBar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_PlayerBtnBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/Tabbar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_Tabbar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Screen/PlayerScreen.qml"), &QmlCacheGeneratedCode::_0x5f_Screen_PlayerScreen_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/CdGroup.qml"), &QmlCacheGeneratedCode::_0x5f_Group_CdGroup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/RotorGroup.qml"), &QmlCacheGeneratedCode::_0x5f_Group_RotorGroup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Component/Scrollsearch.qml"), &QmlCacheGeneratedCode::_0x5f_Component_Scrollsearch_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Screen/YesNoScreen.qml"), &QmlCacheGeneratedCode::_0x5f_Screen_YesNoScreen_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/MusicTimeBar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_MusicTimeBar_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Component/RunningText.qml"), &QmlCacheGeneratedCode::_0x5f_Component_RunningText_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Group/SearchBar.qml"), &QmlCacheGeneratedCode::_0x5f_Group_SearchBar_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}
const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qml)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(qml_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qml))
int QT_MANGLE_NAMESPACE(qCleanupResources_qml)() {
    Q_CLEANUP_RESOURCE(qml_qmlcache);
    return 1;
}
