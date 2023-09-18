#include "main.h"
/**
*print_hexadecimal - Prints a number in hexadecimal format
*
*
*/
int print_hexadecimal(int element)
{
    char hex_digits[] = "0123456789ABCDEF";
    int length = 0;

    while (element > 0)
    {
        _putchar(hex_digits[element % 16]);
        element /= 16;
        length++;
    }

    return length;
}
