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
            count += _putchar(format[i]);
        }
        else
        {
            i++; // Move past '%'
            if (format[i] == 'c')
                count += print_char(va_arg(args, int));
            else if (format[i] == 's')
                count += print_str(va_arg(args, char *));
            else if (format[i] == '%')
                count += _putchar('%');
            // Add more cases for other conversion specifiers here
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

/**
 * print_char - Print a character
 */
int print_char(char c)
{
    return _putchar(c);
}

/**
 * print_str - Print a string
 */
int print_str(char *str)
{
    int count = 0;
    if (str == NULL)
        str = "(null)";
    
    while (str[count])
    {
        _putchar(str[count]);
        count++;
    }
    return count;
}
