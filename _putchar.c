#include "main.h"

/**
 * _putchar - prints/writes character
 * @ch: The character to print
 * Return: 1, succes.
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
