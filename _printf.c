#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Additional arguments based on the format
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    int i = 0;

    va_start(args, format);

    while (format[i])
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            count++;
        }
        else
        {
            i++; // Move past '%'
            if (format[i] == 'c')
            {
                char c = va_arg(args, int);
                _putchar(c);
                count++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                if (str == NULL)
                    str = "(null)";
                while (*str)
                {
                    _putchar(*str);
                    count++;
                    str++;
                }
            }
            else if (format[i] == '%')
            {
                _putchar('%');
                count++;
            }
        }
        i++; // Move to the next character in the format string
    }

    va_end(args);
    return count;
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
