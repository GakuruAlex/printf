
#include "main.h"
/*
*my_printf - implementation of a custom print function
*
*Return: - Size of printed string
*/
int my_printf(const char *format, ...)
{
    
    int return_value = 0, i = 0, print_int;

    char * arg_string;


    va_list format_arg;

    va_start(format_arg, format);

    for (i;i <strlen(format);i++)
    {
    if (format[i] != '\0' )
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
                print_int = va_arg(format_arg, int);
                putchar(print_int);
                i++;
                return_value++;
            }
            else if (format[i + 1] == 's')
            {
                arg_string = va_arg(format_arg,char *);
                int x = print_string(arg_string);
                i++;
                return_value += x;
            }
            else if (format[i +1] == '%')
            {
                putchar('%');
                i++;
                return_value++;
            }
            else if (format[i + 1] == 'd')
            {
                int elem = va_arg(format_arg,int);
                int length =print_decimal(elem);
                return_value += length;
                i++;
            }
        }

    }

}
return return_value;
    }


    