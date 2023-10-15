#include "main.h"
#include <stddef.h>
/**
 * printf_hex - prints a hexadecimal number.
 * @val: arguments.
 * Return: Number of characters printed.
 */
int printf_hex(va_list val)
{
		char hexDigits[] = "0123456789abcdef";

	unsigned int num = va_arg(val, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}



	while (num > 0)
	{
		int digit = num % 16;
		_putchar(hexDigits[digit]);
		num /= 16;
		count++;
	}

	return count;
}
