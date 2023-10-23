#include "main.h"

/**
 * printf_binary - prints a binary number
 * @number: number arguements
 * @pr: the printed characters
 * Return: pr charcaters
 */

int printf_binary(unsigned int number, int pr)
{
	int binary[32] = {0};
	int i = 0;

	if (number == 0)
	{
		_putchar('0');
		pr++;
		return (pr);
	}

	while (number > 0)
	{
		binary[i] = number % 2;
		number /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		pr++;
	}

	return (pr);
}
