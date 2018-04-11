
#ifndef OWNCLOUDSYNC_EXPORT_H
#define OWNCLOUDSYNC_EXPORT_H

#ifdef OWNCLOUD_BUILT_AS_STATIC
#  define OWNCLOUDSYNC_EXPORT
#  define VNPT_DRIVESYNC_NO_EXPORT
#else
#  ifndef OWNCLOUDSYNC_EXPORT
#    ifdef vnpt_drivesync_EXPORTS
        /* We are building this library */
#      define OWNCLOUDSYNC_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define OWNCLOUDSYNC_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VNPT_DRIVESYNC_NO_EXPORT
#    define VNPT_DRIVESYNC_NO_EXPORT 
#  endif
#endif

#ifndef VNPT_DRIVESYNC_DEPRECATED
#  define VNPT_DRIVESYNC_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VNPT_DRIVESYNC_DEPRECATED_EXPORT
#  define VNPT_DRIVESYNC_DEPRECATED_EXPORT OWNCLOUDSYNC_EXPORT VNPT_DRIVESYNC_DEPRECATED
#endif

#ifndef VNPT_DRIVESYNC_DEPRECATED_NO_EXPORT
#  define VNPT_DRIVESYNC_DEPRECATED_NO_EXPORT VNPT_DRIVESYNC_NO_EXPORT VNPT_DRIVESYNC_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VNPT_DRIVESYNC_NO_DEPRECATED
#    define VNPT_DRIVESYNC_NO_DEPRECATED
#  endif
#endif

#endif
