#include "main.h"
/*
*print_string -Prints a given string
*
*Return: -Size of printed string
*/
int print_string(char *str)
{
    int length = strlen(str), i;

    for (i = 0; i < length; i++)
    {
        _putchar(str[i]);
    }

    return length;
}