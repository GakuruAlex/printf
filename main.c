#include "main.h"

int main(void)
{
    char *test_string = "Hello, World";

    int n, x;

    n = my_printf(test_string);
    
    x = printf("%s",test_string);

    printf("\nReturn value of my_printf is : %d \n",n);

    printf("Return value of printf on the same string is : %d \n",x);
    my_printf("Character in my_printf :[%c]\n", 'H');
    printf("Character:in printf :[%c]\n", 'H');
    my_printf("String in my_printf is :[%s]\n","I am a string !");
    printf("String in printf is :[%s]\n", "I am a string !");

    return (1);
}