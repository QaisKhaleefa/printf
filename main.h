#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int printf_string(va_list args, int pr);
int _putchar(char ch);
int printf_char(va_list args, int pr);
int printf_integer(va_list args, int pr);
int printf_binary(unsigned int number, int pr);
int printf_hex(unsigned int number, int pr, int uppercase);
int printf_type(const char *format, va_list args, int pr);
int printf_unsig(unsigned int number, int pr);
int printf_rev(va_list args, int pr);
int printf_octal(unsigned int number, int pr);
int printf_pointer(va_list args, int pr);

#endif
