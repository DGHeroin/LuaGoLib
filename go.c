#ifndef _LUAGOLIB_
#define _LUAGOLIB_
#include <stdio.h>
#include <stdlib.h>

static const char* VersionInfo = "v0.0.1";
static const char* PrintVersion() {
    printf("Go printf %s\n", VersionInfo);
    return VersionInfo;
}

#endif