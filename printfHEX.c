#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int printf_HEX(va_list args) {
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

	return count; // Replace with the actual count of characters printed.
}