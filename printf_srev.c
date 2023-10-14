#include "main.h"

/**
 * printf_srev - Print a string in reverse order.
 * @args: Arguments containing the string to reverse.
 * Return: Number of characters printed.
 */
int printf_srev(va_list args)
{
	char *s = va_arg(args, char*);
	int i, j = 0;

	if (s == NULL)
		s = "(null)";

	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);

	return j;
}
