#include "main.h"
/**
 * _strlen - Return the length of a string.
 *
 * @s: Type char pointer
 *
 * Return: c.
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != 0; length++)
		;
	return (length);
}

/**
 * _strlenc - Strlen function but applied for constant char pointer s
 *
 * @s: Type char pointer
 *
 * Return: c
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
