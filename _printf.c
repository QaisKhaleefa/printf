#include "main.h"

/**
 * _printf - they are factor in the printing
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int print = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			print = printf_type(format, args, print);
			format++;
		}
		else
		{
			_putchar(*format);
			print++;
			format++;
		}
	}
	va_end(args);
	return (print);
}
