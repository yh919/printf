#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - is a function that selects the correct function to print.
 *
 * @format: identifier to look for.
 *
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
int printf_37(va_list val);
convert_match m[] = {
{"%s", printf_string}, {"%c", printf_char}, {"%%", printf_37},
{"%i", printf_int}, {"%d", printf_dec},
{"%r", printf_srev}, {"%R", printf_rot13},
{"%b", printf_bin}, {"%u", printf_unsigned}, {"%o", printf_oct},
{"%x", printf_hex}, {"%S", printf_exclusive_string}, {"%p", printf_pointer}
};
	va_list args;
	int i = 0, j = 0, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; m[j].id != NULL; j++)
			{
				if (m[j].id[0] == format[i])
				{
					len += m[j].f(args);
					break;
				}
			}
			if (m[j].id == NULL)
			{
				_putchar('%');
				len++;
			}
		} else
			{
				_putchar(format[i]);
				len++;
			}
	}
	va_end(args);
	return (len);
}
