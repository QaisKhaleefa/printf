#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: i;
 */
int printf_pointer(va_list val)
{
	int i;
	int b;
	void *p;
	long int a;
	char *ch = "(nil)";

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; ch[i] != '\0'; i++)
		{
			_putchar(ch[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
