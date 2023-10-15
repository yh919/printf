#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * printf_HEX - print hex
 *
 * @args: arguments
 *
 * Return: count
 */

int printf_HEX(va_list args)
{
	char hexDigits[] = "0123456789abcdef";

	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		int digit = num % 16;

		_putchar(hexDigits[digit]);
		num /= 16;
		count++;
	}

	return (count);
}
