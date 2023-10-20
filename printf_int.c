#include "main.h"

/**
 * printf_integer - prints intiger number
 * @args: number arguements
 * @print: the print characters
 * Return: print charcaters
 */

int printf_integer(va_list args, int print)
{
	int digits = 0;
	int num = va_arg(args, int);
	int temp = num;
	int digit;

	if (num < 0)
	{
		print += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int pow = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow *= 10;
		}
		digit = num / pow;
		print += _putchar(digit + '0');
		num -= digit * pow;
		digits--;
	}
	return (print);
}
