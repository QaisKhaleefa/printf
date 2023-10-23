#include "main.h"

/**
 * _putchar - prints/writes character
 * @ch: which ch to print
 * Return: 1, success, -1 error
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
