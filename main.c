#include "mystruct.h"
#include <stdio.h>
#include <string.h>

extern struct mystruct mys_a, mys_b;

int main(int argc, char ** argv)
{
    struct mystruct s[] = { mys_a, mys_b };

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s name\n", argv[0]);
        fprintf(stderr, "Backends: ");
        for (unsigned i = 0; i < sizeof(s)/sizeof(*s); ++i)
        {
            fprintf(stderr, "%s, ", s[i].name);
        }
        fprintf(stderr, "\n");
        return 1;
    }

    for (unsigned i = 0; i < sizeof(s)/sizeof(*s); ++i)
    {
        if (!strcmp(s[i].name, argv[1]))
        {
            printf("f1: %d, f2: %d\n", s[i].f1(), s[i].f2());
            break;
        }
    }

    return 0;
}
