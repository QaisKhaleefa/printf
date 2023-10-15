#include "main.h"

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */


int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10;
	int dgt;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dgt = num / exp;
			_putchar(dgt + '0');
			num = num - (dgt * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

