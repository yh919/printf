#include "main.h"
/**
 * printf_bin - print a binary number.
 * @val: arguments.
 * Return: 1.
 */

int printf_bin(va_list val)
{
	int fl = 0;
	int count = 0;
	int j, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (j = 0; j < 32; j++)
	{
		p = ((a << (31 - j)) & num);
		if (p >> (31 - j))
			fl = 1;
		if (fl)
		{
			b = p >> (31 - j);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
