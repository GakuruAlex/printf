#include "main.h"
/**
 * print_unsigned - A function that prints unsigned values
 * @value: The input
 * Return: Length
 */
int print_unsigned(unsigned int value)
{
	int length = 0;

	if (value >= 10)
	{
		length += print_unsigned int(value / 10);
	}
	_putchar((value % 10) + '0');
	length++;
	return (length);
}
