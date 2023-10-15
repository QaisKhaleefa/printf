#include "main.h"

/**
 * printf_HEX_aux - prints an hexgecimal number.
 * @num: number to print.
 * Return: con.
 */
int printf_HEX_aux(unsigned int num)
{
	int i;
	int *array;
	int con = 0;
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
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (con);
}
