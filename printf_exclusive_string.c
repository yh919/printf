#include "main.h"

/**
 * printf_exclusive_string - print exclusuive string.
 *
 * @val: argument.
 *
 * Return: the length of the string.
 */
int printf_exclusive_string(va_list val)
{
	char *s;
	int i, l = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			l = l + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			l = l + printf_HEX_aux(cast);
		}
		else
		{
			_putchar(s[i]);
			l++;
		}
	}
	return (l);
}
