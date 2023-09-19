#include "main.h"
#include <stdio.h>
/**
 * print_string - a function for printing a string
 * @str: A pointer to the string
 * Return: Length
 */
int print_string(char *str)
{
	int length = 0;

	if (str == NULL)
	{
		return (-1);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		length++;
		str++;
	}
	return (length);
}
