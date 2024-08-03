#ifndef S21_STRING_H
#define S21_STRING_H

#pragma once
#include <ctype.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define s21_NULL (void *)0
typedef long unsigned s21_size_t;

#define DIGITS "0123456789abcdef"
#define PRINTF_SPECS "cdifeEgGoxXupns"
#define SCIENTIFIC_SPECS "eEfgG"
#define SCIENTIFIC_PRECISION 6
#define S21_NULL 0
#define BUFF_SIZE 1024
#define POS_INF 1.0 / 0.0
#define NEG_INF -1.0 / 0.0

void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int symbol);
int s21_strncmp(const char *str_1, const char *str_2, s21_size_t size);
char *s21_strcpy(char *destptr, const char *srcptr);
s21_size_t s21_strspn(const char *str, const char *keys);
char *s21_strerror(int errorNumber);
s21_size_t s21_strlen(const char *str);
char *s21_strpbrk(const char *str, const char *keys);
char *s21_strrchr(const char *str, int symbol);
char *s21_strstr(const char *destptr, const char *srcptr);
char *s21_strtok(char *str, const char *delim);

int s21_sprintf(char *str, const char *format, ...);

#endif
