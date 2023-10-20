#include "main.h"

/**
 * printf_reverse - prints a binary number
 * @args: number of arguements
 * @print: the print characters
 * Return: print charcaters
 */

int printf_reverse(va_list args, int print)
{
	char *str = va_arg(args, char *);
	int len = 0;
	int i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		print++;
	}

	return (print);
}
