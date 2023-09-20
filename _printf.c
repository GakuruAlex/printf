#include "main.h"
/**
 * _printf - A function that outputs formatted string to stdout
 * @format: The string input to be formatted
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
    int i = 0;
    int character_value = 0;
    va_list format_arg;

    va_start(format_arg, format);
    if (format == NULL)
    {
	    return (-1);
    }
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            character_value++;
        }
        else if (format[i] == '%')
        {
            switch (format[i + 1])
            {
                case 'c':
                    _putchar(va_arg(format_arg, int));
                    i++, character_value++;
                    break;
                case 's':
                    character_value += print_string(va_arg(format_arg, char *));
                    i++;
                    break;
                case '%':
                    _putchar('%');
                    i++, character_value++;
                    break;
                case 'd':
                case 'i':
    character_value += print_decimal(va_arg(format_arg, int));
    i++;
    break;

                case 'u':
                    character_value += print_unsigned(va_arg(format_arg, unsigned int));
                    i++;
                    break;
                case 'o':
                    character_value += print_octal(va_arg(format_arg, unsigned int));
                    i++;
                    break;
                case 'x':
                case 'X':
                    character_value += print_hex(va_arg(format_arg, unsigned int), format[i + 1] == 'X');
                    i++;
                    break;
                case 'p':
                    character_value += print_pointer(va_arg(format_arg, void *));
                    i++;
                    break;
                case 'r':
                    _putchar('%');
                    _putchar('r');
                    i++, character_value += 2;
                    break;
                default:
                    _putchar('%');
                    _putchar(format[i + 1]);
                    i++, character_value += 2;
                    break;
            }
        }
    }
    va_end(format_arg);

    return character_value;
}

