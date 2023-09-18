#ifndef MAIN_H
#define MAIN_H
/*Header Files*/
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
/*Function prototypes*/
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int print_decimal(int element);
int print_hexadecimal(int element);
int print_unsigned(unsigned int value);
int print_octal(unsigned int value);
int print_hex(unsigned int value, int uppercase);
int print_pointer(void *);
#endif
