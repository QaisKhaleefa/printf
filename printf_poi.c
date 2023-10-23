#include "main.h"
# define MAX_HEX_DIGITS 16
/**
 * printf_pointer - prints a binary number address
 * @args: number of arg
 * @pr: the printed characters
 * Return: pr charcaters
 */


int printf_pointer(va_list args, int pr)
{
	void *ptr = va_arg(args, void*);
	unsigned long number = (unsigned long) ptr;
	int dgt = 0;
	int i;
	unsigned long temp = number;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];

	while (temp != 0)
	{
		dgt++;
		temp /= 16;
	}

	pr += _putchar('0');
	pr += _putchar('x');

	if (number == 0)
	{
		pr += _putchar('0');
	}
	else
	{
		for (i = dgt - 1; i >= 0; i--)
		{
			int dgt = number % 16;

			hex[i] = hex_digits[dgt];
			number /= 16;
		}
		for (i = 0; i < dgt; i++)
		{
			pr += _putchar(hex[i]);
		}
	}
	return (pr);
}
