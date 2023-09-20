#include "main.h"
#include <stdio.h>
/**
 * print_decimal - A function that recursively prints integers in decimal
 * @element: The input
 * Return: count
 */
int print_decimal(int element)
{
	int count = 0;

	if (element < 0)
	{
		_putchar('-');
		element = -element;
		count++;
	}
	if (element / 10)
	{
		count += print_decimal(element / 10);
	}
	_putchar((element % 10) + '0');
	count++;
	return (count);
}
