#include "main.h"

/**
 * printf_char - prints a binary number
 * @args: the arguements to use
 * @print: the print characters
 * Return: print charcaters
 */

int printf_char(va_list args, int print)
{
	int ch = va_arg(args, int);

	_putchar(ch);
	return (print + 1);
}
