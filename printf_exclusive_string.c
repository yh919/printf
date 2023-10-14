#include "main.h"

/**
 * printf_exclusive_string - print exclusive string.
 * @val: argument.
 * Return: the length of the string.
 */
int printf_exclusive_string(va_list val)
{
    char *s;
    int i = 0;  /* Declare 'i' outside the 'for' loop */
    int len = 0;
    int cast;

    s = va_arg(val, char *);
    if (s == NULL)
        s = "(null)";
    for (; s[i] != '\0'; i++)
    {
        if (s[i] < 32 || s[i] >= 127)
        {
            _putchar('\\');
            _putchar('x');
            len = len + 2;
            cast = s[i];
            if (cast < 16)
            {
                _putchar('0');
                len++;
            }
            len = len + _putchar_hex(cast);
        }
        else
        {
            _putchar(s[i]);
            len++;
        }
    }
    return len;
}


/**
 * _putchar_hex - print a hexadecimal value for a character.
 * @c: the character to print as hexadecimal.
 * Return: the number of characters printed (always 2).
 */
int _putchar_hex(char c)
{
	int len = 0;


	char hexDigits[] = "0123456789ABCDEF";
	_putchar(hexDigits[(c >> 4) & 0xF]);
	_putchar(hexDigits[c & 0xF]);
	len += 2;

	return len;
}
