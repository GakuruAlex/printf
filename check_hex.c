#include "main.h"
#define FALSE 0
#define TRUE 1
bool is_hexadecimal(int value)
{

  if (value < 0) {
    return FALSE;
  }

  while (value > 0) {
    if (!isxdigit(value % 16)) {
      return FALSE;
    }
    value /= 16;
  }

  return TRUE;
}