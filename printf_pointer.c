#include "main.h"

/**
 * printf_pointer - prints a pointer in hexadecimal format.
 * @val: arguments.
 * Return: Number of characters printed.
 */
int printf_pointer(va_list val)
{
	void *p = va_arg(val, void *);

	if (p == NULL)
	{
		char *nil = "(nil)";
		int i;

		for (i = 0; nil[i] != '\0'; i++)
			_putchar(nil[i]);

		return i;
	}
	else
	{
		unsigned long int address = (unsigned long int)p;
		int count = printf_hex_aux(address);

		/* Print "0x" at the beginning */
		_putchar('0');
		_putchar('x');

		return count + 2;
	}
}
