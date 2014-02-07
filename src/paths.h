#ifndef _PATHS_H
#define _PATHS_H
/*
 * All data is in subdirectories of DATADIR, by default /usr/lib/kbd
 * The following five subdirectories are defined:
 */
#define KEYMAPDIR "keymaps"
#define UNIMAPDIR "unimaps"
#define TRANSDIR "consoletrans"
#define VIDEOMODEDIR "videomodes"
#define FONTDIR "consolefonts"
/* subdir of the latter */
#define PARTIALDIR "partialfonts"
/* obsolete */
#define OLDKEYMAPDIR "keytables"

/*
 * Default keymap, and where the kernel copy of it lives.
 */
#ifdef __sparc__
# define DEFMAP "sunkeymap.kmap"
# define KERNDIR "/usr/src/linux/drivers/sbus/char"
#else
# define DEFMAP "defkeymap.kmap"
# define KERNDIR "/usr/src/linux/drivers/char"
#endif

#include "findfile.h"
extern char pathname[];

extern int verbose;
extern int debug;

#endif /* _PATHS_H */
