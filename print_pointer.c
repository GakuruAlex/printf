#include "main.h"

int print_pointer(void *value) {
  int count = 0;
  int  i = 0;
  uintptr_t hex_value;
  char buffer[16]; 

  hex_value = (uintptr_t)value;

  _putchar('0');
  _putchar('x');
  count += 2;

  do {
    char digit = (hex_value & 0xF) + '0';
    if (digit > '9') {
      digit += 'a' - '9' - 1;
    }
    buffer[i++] = digit;
    hex_value >>= 4;
  } while (hex_value > 0);

  
  while (--i >= 0) {
    _putchar(buffer[i]);
    count++;
  }

  return count;
}
