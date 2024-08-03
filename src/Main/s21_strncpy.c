#include "../s21_string.h"

char *s21_strcpy(char *destptr, const char *srcptr) {
  int srcptrLen = s21_strlen(srcptr);

  for (int x = 0; x <= srcptrLen; x += 1) {
    destptr[x] = srcptr[x];
  }

  return destptr;
}