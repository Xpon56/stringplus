#include "../s21_string.h"

int s21_strncmp(const char *str_1, const char *str_2, s21_size_t size) {
  for (s21_size_t x = 0; x < size; x += 1) {
    if (str_1[x] != str_2[x]) {
      return str_1[x] - str_2[x];
    }
    if (str_1[x] == '\0') {
      break;
    }
  }
  return 0;
}