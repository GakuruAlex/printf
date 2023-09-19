#include "main.h"
/**
 * print_octal - For printing octal values
 * @value: The input
 * Return: Length
 */
int print_octal(unsigned int value)
{
	int length = 0;

	if (value >= 8)
	{
		length += print_octal(value / 8);
	}
	_putchar((value % 8) + '0');
	length++;
	return (length);
}
