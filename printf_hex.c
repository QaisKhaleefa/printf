#include "main.h"

/**
 * printf_hex- prints a binary number from dec
 * @number: number  of arguements
 * @pr: the pr characters
 * @uppercase: the uppercase equivalent
 * Return: pr charcaters
 */


int printf_hex(unsigned int number, int pr, int uppercase)
{
	int hex[100];
	int i = 0;
	int j;

	while (number != 0)
	{
		int rem = number % 16;

		if (rem < 10)
		{
			hex[i] = 48 + rem;
		}
		else
		{
			if (uppercase)
			{
				hex[i] = 65 + (rem - 10);
			}
			else
			{
				hex[i] = 97 + (rem - 10);
			}
		}
		i++;
		number /= 16;
	}
	if (i == 0)
	{
		_putchar('0');
		pr++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			pr++;
		}
	}
	return (pr);
}
