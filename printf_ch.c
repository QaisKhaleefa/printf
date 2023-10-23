#include "main.h"


/**
 * printf_char - print the decimal number to a binary number
 * @args: the arguements to use
 * @pr: the printed characters
 * Return: pr ch
 */

int printf_char(va_list args, int pr)
{
	int ch = va_arg(args, int);

	_putchar(ch);
	return (pr + 1);
}
