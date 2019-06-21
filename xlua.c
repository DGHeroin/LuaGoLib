#include "xlua.h"

extern void GPrintVersion();
static int c_print (lua_State *L) {
    printf("Hello\n");
    GPrintVersion();
    return 0;
}

static const struct luaL_Reg mylib [] = {
  {"c_print", c_print},
  {NULL, NULL}  /* sentinel */
};

int luaopen_xlua (lua_State *L) {
    luaL_newlib(L, mylib);
    return 1;
}

