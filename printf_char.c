#include "main.h"

/**
 * printf_char - print a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char m;

	m = va_arg(val, int);
	_putchar(m);
	return (1);
}
