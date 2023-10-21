#include "main.h"

/**
 * printf_bin - prints a binary number
 * @num: number of arguements
 * @print: the print characters
 * Return: print charcaters
 */

int printf_bin(unsigned int num, int print)
{
	int i = 0;
	int binary[32] = {0};

	if (num == 0)
	{
		_putchar('0');
		print++;
		return (print);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		print++;
	}

	return (print);
}
