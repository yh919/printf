#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: Number of characters printed.
 */
int printf_bin(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;
	int i;
	int leading_zero = 1; 

	for (i = 31; i >= 0; i--)
	{
		int bit = (num >> i) & 1;
		if (bit || !leading_zero)
		{
			_putchar('0' + bit);
			count++;
			leading_zero = 0;
		}
	}

	if (count == 0)
	{
		_putchar('0');
		count++;
	}

	return count;
}
