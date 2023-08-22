#include "main.h"
/*
*print_string -Prints a given string
*
*Return: -Size of printed string
*/
int print_string(char *str)
{
    int length, i = 0;

    length =strlen(str);

    for (i; i < length; i++)
    {
        if (str[i] != '\0')
        {
              putchar(str[i]);

        }

    }
    return length;
}