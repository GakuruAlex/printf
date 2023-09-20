#include "main.h"
/**
 * print_integer - A function that prints integers
 * @value: The input
 * Return: Length
 */
int print_integer(int value)
{
	int length = 0;

	if (value < 0)
	{
		_putchar('-');
		length++;
		value = -value;
	}
	if (value >= 10)
	{
		length += print_integer(value / 10);
	}
	_putchar((value % 10) + '0');
	length++;
	return (length);
}
