#include "main.h"
#include <stdio.h>
/*
*print_decimal -Recursively prints integers in decimal
*
*Return: Always length of integer
*/
int print_decimal(int element)
{
    int length = 0;

    if (element < 0)
{
    putchar('-');
    element = - element;
}
    if (element < 10)
    {
        putchar(element + '0');
        length++;

    }
    else if(element / 10)
    {
        print_decimal(element / 10);
        putchar(element % 10 + '0');
        length++;
    }
    
return length;
}
