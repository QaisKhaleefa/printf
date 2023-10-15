#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * printf_st - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_st(va_list val)
{
	char *ch;
	int i, len;

	ch = va_arg(val, char *);
	if (ch == NULL)
	{
		ch = "null";
		len = _strlen(ch);
		for (i = 0; i < len; i++)
			_putchar(ch[i]);
		return (len);
	}
	else
	{
		len = _strlen(ch);
		for (i = 0; i < len; i++)
			_putchar(ch[i]);
		return (len);
	}
}

