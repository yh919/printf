#include "main.h"
/**
 * printf_pointer - print an hexdecimal number.
 *
 * @val: arguments.
 *
 * Return: count.
 */

int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int j;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
		return (j);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
