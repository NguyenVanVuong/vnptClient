#ifndef CONFIG_H
#define CONFIG_H

/* #undef USE_INOTIFY */
/* #undef WITH_QTKEYCHAIN */
/* #undef WITH_CRASHREPORTER */
#define CRASHREPORTER_EXECUTABLE "vnpt-drive_crash_reporter"
#define SOCKETAPI_TEAM_IDENTIFIER_PREFIX ""

/* #undef APPLICATION_DOMAIN */
#define THEME_CLASS ownCloudTheme
/* #undef THEME_INCLUDE */

#define APPLICATION_NAME "VNPT Drive"
#define APPLICATION_VENDOR "VNPT Drive"
#define APPLICATION_REV_DOMAIN "drive.vnpt.vn"
#define APPLICATION_SHORTNAME "VNPT Drive"
#define APPLICATION_EXECUTABLE "vnpt-drive"
#define APPLICATION_UPDATE_URL "https://drive.vnpt.vn"

#define ZLIB_FOUND TRUE

#define SYSCONFDIR "config"
#define SHAREDIR "share"

#endif
