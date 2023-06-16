#pragma once

#include <fltKernel.h>

#ifndef dprintf
#    define dprintf(format, ...) DbgPrintEx(DPFLTR_DEFAULT_ID, DPFLTR_ERROR_LEVEL, (format), __VA_ARGS__)
#endif
