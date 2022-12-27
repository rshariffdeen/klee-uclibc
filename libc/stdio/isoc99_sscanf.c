/* Copyright (C) 2004      Manuel Novoa III <mjn3@uclibc.org>
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 *
 * Dedicated to Toni.  See uClibc/DEDICATION.mjn3 for details.
 */

#define _ISOC99_SOURCE                  /* for LLONG_MAX primarily... */
#include <features.h>
#include "_stdio.h"
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdarg.h>
#include <stdint.h>
#include <errno.h>
#include <printf.h>

libc_hidden_proto(__isoc99_sscanf)
int __isoc99_sscanf(const char * __restrict str, const char * __restrict format, ...)
{
        va_list arg;
        int rv;

        va_start(arg, format);
        rv = vsscanf(str, format, arg);
        va_end(arg);

        return rv;
}
libc_hidden_def(__isoc99_sscanf)
