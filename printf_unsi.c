#include "main.h"

/**
 * printf_unsig - prints a binary number from unsigned
 * @number: number of arguements
 * @pr: the printed characters
 * Return: printed charcaters
 */


int printf_unsig(unsigned int number, int pr)
{
	int dgt = 0;
	unsigned int temp = number;

	do {
		dgt++;
		temp /= 10;
	} while (temp != 0);

	if (number == 0)
	{
		_putchar('0');
		pr++;
	}
	else
	{
		char unsigned_str[11];
		int i = 0;

		while (number != 0)
		{
			unsigned_str[i] = (number % 10) + '0';
			number /= 10;
			i++;
		}
		for (i = dgt - 1; i >= 0; i--)
		{
			_putchar(unsigned_str[i]);
			pr++;
		}
	}
	return (pr);
}
