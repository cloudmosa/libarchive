#include "build/build_config.h"

#if defined(OS_LINUX)
#include "config_linux.h"
#elif defined(OS_MACOSX) && !defined(OS_IOS)
#include "config_macosx.h"
#elif defined(OS_MACOSX) && defined(OS_IOS)
#include "config_ios.h"
#else
#error Not supported platform
#endif

