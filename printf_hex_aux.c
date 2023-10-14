#include "main.h"

/**
 * printf_hex_aux - prints a hexadecimal number.
 * @num: the number to print in hexadecimal.
 * Return: Number of characters printed.
 */
int printf_hex_aux(unsigned long int num)
{
	int counter = 0;
	unsigned long int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp > 0)
	{
		counter++;
		temp /= 16;
	}

	char hexDigits[] = "0123456789abcdef";
	temp = num;
	while (counter > 0)
	{
		counter--;
		_putchar(hexDigits[(temp >> (4 * counter)) & 0xf]);
	}

	return counter;
}
