#include "main.h"
#include <stddef.h>

/**
 * printf_char - prints a character.
 *
 * @val: arguments.
 *
 * Return: Number of characters printed (always 1).
 */

int printf_char(va_list val)
{
	char c = va_arg(val, int);
	_putchar(c);
	return (1);
}
