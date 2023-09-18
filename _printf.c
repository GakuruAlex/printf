#include "main.h"
int _printf(const char *format, ...)
{
    int i, return_value = 0;
    va_list format_arg;

    va_start(format_arg, format);

    for (i = 0; (unsigned int)i < strlen(format); i++)
    {
        if (format[i] != '\0')
        {
            if (format[i] != '%')
            {
                putchar(format[i]);
                return_value++;
            }
            else if (format[i] == '%')
            {
                if (format[i + 1] == 'c')
                {
                    putchar(va_arg(format_arg, int));
                    i++;
                    return_value++;
                }
                else if (format[i + 1] == 's')
                {
                    return_value += print_string(va_arg(format_arg, char *));
                    i++;
                }
                else if (format[i + 1] == '%')
                {
                    putchar('%');
                    i++;
                    return_value++;
                }
                else if (format[i + 1] == 'd')
                {
                    return_value += print_decimal(va_arg(format_arg, int));
                    i++;
                }
            }
        }
    }

    va_end(format_arg);

    return return_value;
}