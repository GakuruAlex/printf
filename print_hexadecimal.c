#include "main.h"
/**
 * print_hexadecimal - Prints hexadecimals
 * @value: The input
 * @uppercase: Uppercase values
 * Return: Count
 */
int print_hexadecimal(unsigned int value, int uppercase)
{
	int count = 0, i;
	int digits[8];

	for (i = 0; i < 8; i++)
	{
		digits[i] = value & 0xF;
		value >>= 4;
	}

	for (i = 7; i >= 0; i--)
	{
		char digit = digits[i];

		if (digit < 10)
		{
			_putchar('0' + digit);
		}
		else
		{
			if (uppercase)
			{
				_putchar('A' + digit - 10);
			}
			else
			{
				_putchar('a' + digit - 10);
			}
		}
		count++;
	}
	return (count);
}
