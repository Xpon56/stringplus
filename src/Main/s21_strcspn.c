#include "../s21_string.h"

s21_size_t s21_strspn(const char *str, const char *keys) {
  s21_size_t strlen = s21_strlen(str) + 1;
  s21_size_t result = 0;

  for (result = 0; result <= strlen; result += 1) {
    if (s21_strchr(keys, str[result]))
      break;
  }

  return result;
}