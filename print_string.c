#include "main.h"
#include <stdio.h>

int print_string(char *str) {
    int length = 0;

    if (str == NULL) {
        return -1;
    }

    while (*str != '\0') {
        putchar(*str);
        length++;
        str++;
    }

    return length;
}
