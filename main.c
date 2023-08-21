#include "main.h"

int main(void)
{
    char *test_string = "Hello, World";

    int n, x;

    n = my_printf(test_string);
    
    x = printf("%s",test_string);

    printf("\nReturn value of my_printf is : %d \n",n);

    printf("Return value of printf on the same string is : %d \n",x);


    return (1);
}