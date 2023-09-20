#include "main.h"
/**
 * print_integer - A function that prints integers
 * @value: The input
 * Return: Length
 */
int print_integer(int value)
{
	int length = 0;
	bool isHex;

	isHex =is_hexadecimal(value);

	if (isHex)
	{
		length += print_hex(value, 0);
	}
	if (!isHex)
	{
		length += print_decimal(value);
	}
	
	return (length);
}
