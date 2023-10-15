#include "main.h"
#include <stddef.h>

/**
 * printf_unsigned - Print an unsigned integer.
 *
 * @args: Argument to print.
 *
 * Return: Number of characters printed.
 */

int printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int digit, exp = 1;
	int i = 1;

	while (exp <= n / 10)
		exp *= 10;

	while (exp > 0)
	{
		digit = n / exp;
		_putchar(digit + '0');
		n %= exp;
		exp /= 10;
		i++;
	}

	return (i);
}
