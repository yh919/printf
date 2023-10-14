#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strlenc - Returns the length of a constant string.
 * @s: Pointer to a constant string
 * Return: Length of the string.
 */
int _strlenc(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
