#include "../s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static int restok;
  static s21_size_t idx;
  static char *ptr;
  static char *addr;

  if (str) {
    restok = 1;
    idx = 0;
    addr = str + s21_strspn(str, delim);
    ptr = str + s21_strlen(str);
  }

  char *res = s21_NULL;
  if (addr < ptr) {
    int exdelim = 1;
    for (int i = 0; addr[i]; i++) {
      s21_size_t step = s21_strspn(addr + i, delim);
      if (step != 0) {
        exdelim = 0;
        addr[i + step] = '\0';
        idx = step + i;
        break;
      }
    }
    if (restok == 1 && exdelim) {
      restok = 0;
    }
    res = addr;
    addr += idx;
  }
  return res;
}