#include <stdio.h>

int print_hex(unsigned int value, int uppercase)
{
    if (uppercase)
        return printf("%X", value);
    else
        return printf("%x", value);
}
