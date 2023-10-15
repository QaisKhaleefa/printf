#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @ch: Type char pointer
 * Return: c.
 */
int _strlen(char *ch)
{
	int c;

	for (c = 0; ch[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @ch: Type char pointer
 * Return: c
 */
int _strlenc(const char *ch)
{
	int c;

	for (c = 0; ch[c] != 0; c++)
		;
	return (c);
}
