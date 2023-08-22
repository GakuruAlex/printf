#include "main.h"
/*
*main - implementation of functions
*
*Return: Always 0 (Success)
*/
int main(void)
{
    char *test_string = "Hello, World";

    int n, x, len, len2;

    n = my_printf(test_string);
    
    x = printf("%s",test_string);

    printf("\nReturn value of my_printf is : %d \n",n);

    printf("Return value of printf on the same string is : %d \n",x);
    my_printf("Character in my_printf :[%c]\n", 'H');
    printf("Character:in printf :[%c]\n", 'H');
    my_printf("String in my_printf is :[%s]\n","I am a string !");
    printf("String in printf is :[%s]\n", "I am a string !");
    len = my_printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    my_printf("Len in my_printf is :[%d]\n", len);
    printf("Len in printf is :[%d]\n", len2);
    my_printf("Edge case is 45648 [%d]\n",45648);
    my_printf("Edge case for negative number is -876589 [%d]\n",-876589);

    return (0);
}