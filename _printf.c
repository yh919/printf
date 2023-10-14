#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	/* Declare printf_37 */
int printf_37(va_list val);

/* Initialize the structure with an initializer list */

/* convert_match m[] = {
    {"%s", printf_string}, {"%c", printf_char},
    {"%%", printf_37},
    {"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
    {"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
    {"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
    {"%S", printf_exclusive_string}, {"%p", printf_pointer}
};
*/

	va_list args;
    int len = 0;
    int i = 0;
	int j = 0

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (m[j].id != NULL)
			{
				if (m[j].id[0] == format[i])
				{
					len += m[j].f(args);
					break;
				}
				j++;
			}
			if (m[j].id == NULL)
			{
				_putchar('%');
				len++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
