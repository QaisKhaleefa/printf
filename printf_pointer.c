#include "main.h"


/**
 * printf_pointer - prints a binary number
 * @args: numberof arguements
 * @print: the print characters
 * Return: print charcaters
 */

int printf_pointer(va_list args, int print)
{
	void *ptr = va_arg(args, void*);
	unsigned long num = (unsigned long) ptr;
	int i;
	int digits = 0;
	unsigned long temp = num;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];

	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}

	print += _putchar('0');
	print += _putchar('x');

	if (num == 0)
	{
		print += _putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			int digit = num % 16;

			hex[i] = hex_digits[digit];
			num /= 16;
		}
		for (i = 0; i < digits; i++)
		{
			print += _putchar(hex[i]);
		}
	}
	return (print);
}
