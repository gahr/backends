#include "mystruct.h"

static int fun1()
{
    return 12;
}

static int fun2()
{
    return 13;
}

struct mystruct mys_b = {
    .name = "b",
    .f1 = fun1,
    .f2 = fun2
};
