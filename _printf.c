#include "main.h"

/**
 * _printf - provide the print requrment
 * @format: specify format
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int pr = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			pr = printf_type(format, args, pr);
			format++;
		}
		else
		{
			_putchar(*format);
			pr++;
			format++;
		}
	}
	va_end(args);
	return (pr);
}
