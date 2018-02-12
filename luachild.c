
#ifdef USE_POSIX
#include "luachild_posix.c"
#endif

#ifdef USE_WINDOWS
#include "luachild_windows.c"
#endif

#include "lualib.h"

#include "luachild_luajit_2_1.c"

#include "luachild_common.c"

