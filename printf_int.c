#include "main.h"

/**
 * printf_integer - intiger number
 * @args: number arguements
 * @pr: the printed characters
 * Return: pr charcaters
 */

int printf_integer(va_list args, int pr)
{
	int number = va_arg(args, int);
	int dgt = 0;
	int temp = number;


	if (number < 0)
	{
		pr += _putchar('-');
		number = -number;

		temp = number;
	}

	do {
		dgt++;
		temp /= 10;
	} while (temp != 0);

	while (dgt > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < dgt; i++)
		{
			pow10 *= 10;
		}
		dgt = number / pow10;
		pr += _putchar(dgt + '0');
		number -= dgt * pow10;
		dgt--;
	}
	return (pr);
}
