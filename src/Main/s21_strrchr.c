#include "../s21_string.h"

char *s21_strrchr(const char *str, int symbol) {
  int strLen = s21_strlen(str);
  const char *result = s21_NULL;

  for (int x = strLen; result == s21_NULL && x >= 0; x -= 1) {
    if (str[x] == symbol)
      result = (str + x);
  }
  return (char *)result;
}