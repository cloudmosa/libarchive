#include "build/build_config.h"

#if defined(OS_LINUX)
#include "config_linux.h"
#elif defined(OS_MACOSX)
#include "config_macosx.h"
#else
#error Not supported platform
#endif

