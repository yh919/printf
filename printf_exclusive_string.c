#include "main.h"

/**
 * printf_exclusive_string - print exclusive string.
 * @val: argument.
 * Return: the length of the string.
 */
int printf_exclusive_string(va_list val)
{
	char *s = va_arg(val, char *);
	int len = 0;

	if (s == NULL)
		s = "(null)";

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			len += _putchar_hex(s[i]);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}

	return len;
}

/**
 * _putchar_hex - print a hexadecimal value for a character.
 * @c: the character to print as hexadecimal.
 * Return: the number of characters printed (always 2).
 */
int _putchar_hex(char c)
{
	int len = 0;

	// Print the hexadecimal representation of the character
	char hexDigits[] = "0123456789ABCDEF";
	_putchar(hexDigits[(c >> 4) & 0xF]);
	_putchar(hexDigits[c & 0xF]);
	len += 2;

	return len;
}
