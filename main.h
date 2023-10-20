#ifndef MAIN_H
#define MAIN_H

#define MAX_HEX_DIGITS 16

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int printf_integer(va_list args, int print);
int printf_char(va_list args, int print);
int printf_string(va_list args, int print);
int _printf(const char *format, ...);
int _putchar(char ch);
int printf_reverse(va_list args, int print);
int printf_type(const char *format, va_list args, int print);
int printf_octal(unsigned int num, int print);
int printf_bin(unsigned int num, int print);
int printf_hex(unsigned int num, int print, int uppercase);
int printf_unsigned(unsigned int num, int print);
int printf_pointer(va_list args, int print);

#endif
