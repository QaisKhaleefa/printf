#include "main.h"

/**
 * printf_str - string printing
 * @args: numberof arguements
 * @pr: the printed characters
 * Return: pr charcaters
 */


int printf_str(va_list args, int pr)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		pr++;
		str++;
	}
	return (pr);
}
