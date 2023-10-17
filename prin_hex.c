#include <stdio.h>
#include "main.h"

/**
 * printf_hex - prints an hexgecimal number.
 * @val: arguments.
 * Return: con.
 */
int printf_hex(va_list val)
{
	int i;
	int *array;
	int con = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		con++;
	}
	con++;
	array = malloc(con * sizeof(int));

	for (i = 0; i < con; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = con - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (con);
}
