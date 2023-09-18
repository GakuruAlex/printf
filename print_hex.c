#include "main.h"
int print_hex(unsigned int value, int uppercase)
{
    if (uppercase)
        return print_hexadecimal(value, 1);
    else
        return print_hexadecimal( value, 0);
}
