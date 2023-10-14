#include "main.h"

/**
 * print_number - prints a number (integer or decimal)
 * @n: the number to print
 * Return: the number of characters printed
 */
int printf_int(va_list args)
{
    int num, last, digit, exp = 1;
    int i = 0;

    if ((num = va_arg(args, int)) < 0)
    {
        _putchar('-');
        last = -num;
        i++;
    }
    else
    {
        last = num;
    }

    if (last < 0)
    {
        _putchar('-');
        num = -num;
        n = -n;
        last = -last;
        i++;
    }

	int num = n;
	while (num / 10 != 0)
	{
		exp *= 10;
		num /= 10;
	}

	num = n;
	while (exp > 0)
	{
		int digit = num / exp;
		_putchar(digit + '0');
		num -= digit * exp;
		exp /= 10;
		i++;
	}

	return i;
}

/**
 * printf_int - prints an integer
 * @args: argument to print
 * Return: the number of characters printed
 */
int printf_int(va_list args)
{
	return print_number(va_arg(args, int));
}

/**
 * printf_dec - prints a decimal
 * @args: argument to print
 * Return: the number of characters printed
 */
int printf_dec(va_list args)
{
	return print_number(va_arg(args, int));
}
