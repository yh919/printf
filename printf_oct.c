#include "main.h"
#include <stddef.h>
/**
 * printf_oct - prints an octal number.
 * @val: arguments.
 * Return: Number of characters printed.
 */
int printf_oct(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	while (num > 0)
	{
		int digit = num % 8;
		_putchar(digit + '0');
		num /= 8;
		count++;
	}

	return count;
}
