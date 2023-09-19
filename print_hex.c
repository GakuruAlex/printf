#include "main.h"
/**
 * print_hex - A function for printing hexadecimals
 * @value: The input
 * @uppercase: An uppercase value
 * Return: The hexadecimal
 */
int print_hex(unsigned int value, int uppercase)
{
	if (uppercase)
		return (print_hexadecimal(value, 1));
	else
		return (print_hexadecimal(value, 0));
}
