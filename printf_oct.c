#include "main.h"

/**
 * printf_octal - prints a number from dec
 * @number: number of arguements
 * @pr: the printed characters
 * Return: pr charcaters
 */

int printf_octal(unsigned int number, int pr)
{
	int oct[100];
	int i = 0;
	int j;

	while (number != 0)
	{
		int rem = number % 8;

		oct[i] = 48 + rem;
		i++;
		number /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		pr++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			pr++;
		}
	}
	return (pr);
}
