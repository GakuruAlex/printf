#include "main.h"
int my_printf(const char *format, ...)
{
    
    int return_value = 0, i = 0;

    va_list format_arg;

    va_start(format_arg, format);

    for (i;i <strlen(format);i++)
    {
    while (format[i] != '\0' )
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
            return_value++;
        }
        else
        {
            if (format[i +1] == 's')
            {
                
            }
        }
        
    }

    }


    return return_value;
}