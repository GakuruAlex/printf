#include "main.h"
int my_printf(const char *format, ...)
{
    
    int return_value = 0, i = 0, print_int;


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
            
        }
        
        
    }
     
}
return return_value;
    }


    