#include "../s21_string.h"

s21_size_t s21_strlen(const char *str) {
  s21_size_t strcount = 0;
  for (; str[strcount];) {
    strcount += 1;
  }
  return strcount;
}
