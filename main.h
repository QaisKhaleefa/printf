#ifndef MAIN_H
#define MAIN_H

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
int _x(unsigned int num, int printed, int uppercase);
int printf_unsigned(unsigned int num, int print);
int printf_pointer(va_list args, int print);

#endif
