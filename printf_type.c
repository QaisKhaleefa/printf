#include "main.h"

/**
 * printf_type - selects the exactly type to print.
 * @args: number of arguements
 * @print: the print characters
 * @format: the format specifier
 * Return: print case.
 */

int printf_type(const char *format, va_list args, int print)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			print = printf_integer(args, print);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			print++;
			break;
		case 's':
			print = printf_string(args, print);
			break;
		case '%':
			_putchar('%');
			print++;
			break;
		case 'b':
			print = printf_bin(va_arg(args, unsigned int), print);
			break;
		case 'x':
		case 'X':
			print = printf_hex(va_arg(args, unsigned int), print, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			print = printf_octal(va_arg(args, unsigned int), print);
			break;
		case 'u':
			print = printf_unsigned(va_arg(args, unsigned int), print);
			break;
		case 'r':
			print = printf_reverse(args, print);
			break;
		case 'p':
			print = printf_pointer(args, print);
			break;
		default:
			break;
	}
	return (print);
}
