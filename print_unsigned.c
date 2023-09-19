#include "main.h"

int print_unsigned(unsigned int value) {
  int length = 0;

  if (value >= 10) {
    length += print_unsigned(value / 10);
  }

  _putchar((value % 10) + '0');
  length++;

  return length;
}