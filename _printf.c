#include "main.h"

/**
 * _printf - is a function that select the correct function to print.
 *
 * @format: identifier to look for.
 *
 * Return: length of the string.
 */

int _printf(const char * const format, ...)
{
	convert_match a[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
	int l = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[l] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (a[j].id[0] == format[l] && a[j].id[1] == format[l + 1])
			{
				len += a[j].f(args);
				l = l + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[l]);
		len++;
		l++;
	}
	va_end(args);
	return (len);
}
