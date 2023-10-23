#include "main.h"

/**
 * printf_rev - prints a binary number
 * @args: number of arguements
 * @pr: the pr characters
 * Return: pr charcaters
 */

int printf_rev(va_list args, int pr)
{
	char *str = va_arg(args, char *);
	int leng = 0;
	int i;

	while (str[leng])
	{
		leng++;
	}

	for (i = leng - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		pr++;
	}

	return (pr);
}
