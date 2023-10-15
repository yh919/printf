#include "main.h"
#include <stddef.h>
/**
 * printf_string - Print a string.
 * @val: Argument.
 * Return: The length of the string.
 */
int printf_string(va_list val)
{
    char *s;
    int len;  /* Move 'len' outside the 'if' statement */
    int i;

    s = va_arg(val, char *);
    len = _strlen(s);  /* Move 'len' outside the 'if' statement */
    if (s == NULL)
    {
        s = "(null)";
        for (i = 0; i < len; i++)
            _putchar(s[i]);
        return len;
    }
    else
    {
        for (i = 0; i < len; i++)
            _putchar(s[i]);
        return len;
    }
}
