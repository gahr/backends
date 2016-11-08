// a.c
#include "mystruct.h"

static int fun1()
{
    return 42;
}

static int fun2()
{
    return 43;
}

struct mystruct mys_a = {
    .name = "a",
    .f1 = fun1,
    .f2 = fun2
};
