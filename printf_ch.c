#include <stdio.h>
#include "main.h"

/**
 * printf_ch - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_ch(va_list val)
{
	char ch;

	ch = va_arg(val, int);
	_putchar(ch);
	return (1);
}
