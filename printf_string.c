#include "main.h"

/**
 * printf_string - Print a string.
 * @val: Argument.
 * Return: The length of the string.
 */
int printf_string(va_list val)
{
	char *s = va_arg(val, char *);

	if (s == NULL)
		s = "(null)";

	int len = _strlen(s);

	for (int i = 0; i < len; i++)
		_putchar(s[i]);

	return len;
}
