#include "../s21_string.h"

char *s21_strstr(const char *destptr, const char *srcptr) {
  s21_size_t srcptrlen = s21_strlen(srcptr);
  const char *result = s21_NULL;

  if (srcptrlen != 0) {
    for (int x = 0; result == s21_NULL && destptr[x] != '\0'; x += 1) {
      if (destptr[x] == srcptr[0]) {
        if (s21_strncmp(destptr + x, srcptr, srcptrlen) == 0)
          result = destptr + x;
      }
    }
  }

  return (char *)(result == s21_NULL ? destptr : result);
}