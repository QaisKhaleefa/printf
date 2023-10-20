#include "main.h"

/**
 * printf_string - prints a string
 * @args: numberof arguements
 * @print: the printed characters
 * Return: print charcaters
 */

int printf_string(va_list args, int print)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		print++;
		str++;
	}
	return (print);
}
