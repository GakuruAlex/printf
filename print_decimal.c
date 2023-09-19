#include "main.h"
#include <stdio.h>
/**
 * print_decimal - A function that recursively prints integers in decimal
 * @element: The input
 * Return: Length
 */
int print_decimal(int element)
{
	int length = 0;

	if (element < 0)
	{
		_putchar('-');
		element = -element;
	}
	if (element < 10)
	{
		_putchar(element + '0');
		length++;
	}
	else if (element / 10)
	{
		print_decimal(element / 10);
		_putchar(element % 10 + '0');
		length++;
	}
	return (length);
}
