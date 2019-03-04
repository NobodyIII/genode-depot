/* Installation date */
static const char qt_configure_installation          [12+11]    = "qt_instdate=2012-12-20";

/* Installation Info */
static const char qt_configure_prefix_path_str       [256 + 12] = "qt_prfxpath=/qt";
#ifdef QT_BUILD_QMAKE
static const char qt_configure_ext_prefix_path_str   [256 + 12] = "qt_epfxpath=";
static const char qt_configure_host_prefix_path_str  [256 + 12] = "qt_hpfxpath=";
#endif

static const short qt_configure_str_offsets[] = {
     0, 4, 12, 16, 24, 28, 36, 44, 48, 50, 52, 65, 74,
#ifdef QT_BUILD_QMAKE
     80, 81, 85, 89, 91, 101,
#endif
};
static const char qt_configure_strs[] =
    "doc\0"
    "include\0"
    "lib\0"
    "libexec\0"
    "bin\0"
    "plugins\0"
    "imports\0"
    "qml\0"
    ".\0"
    ".\0"
    "translations\0"
    "examples\0"
    "tests\0"
#ifdef QT_BUILD_QMAKE
    "\0"
    "bin\0"
    "lib\0"
    ".\0"
    "linux-g++\0"
    "linux-g++\0"
#endif
;

#define QT_CONFIGURE_SETTINGS_PATH "etc/xdg"

#ifdef QT_BUILD_QMAKE
# define QT_CONFIGURE_SYSROOTIFY_PREFIX false
#endif

#define QT_CONFIGURE_PREFIX_PATH qt_configure_prefix_path_str + 12
#ifdef QT_BUILD_QMAKE
# define QT_CONFIGURE_EXT_PREFIX_PATH qt_configure_ext_prefix_path_str + 12
# define QT_CONFIGURE_HOST_PREFIX_PATH qt_configure_host_prefix_path_str + 12
#endif
