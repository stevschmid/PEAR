#ifndef _PEAR_
#define _PEAR_
#include "config.h"

#define PROGRAM_NAME            "PEAR"
#define PROGRAM_VERSION         "0.9.4"
#define VERSION_DATE            "August 3, 2014"
#define LICENCE                 "Creative Commons Licence"
#define CONTACT                 "Tomas.Flouri@h-its.org and Jiajie.Zhang@h-its.org"

#ifdef HAVE_BZLIB_H
#define COMPILE_INFO            " - [+bzlib]"
#else
i#define COMPILE_INFO           ""
#endif

#endif
