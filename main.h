#ifndef "main.h"
#define "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int printf_ch(va_list val);
int printf_st(va_list val);
int printf_perc(void);
int printf_int(va_list args);
int prnttf_dec(va_list args);
int _strlen(char *ch);
int _strlenc(const char *ch);

#endif
