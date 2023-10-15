#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: a string representing the conversion specifier
 * @f: a pointer to the function for the conversion specifier
 */
typedef struct format
{
	char *id;
	int (*f)(va_list);
} convert_match;

int _printf(const char *format, ...);
int _putchar(char c);
int _putchar_hex(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int printf_int(va_list val);
int printf_dec(va_list val);
int printf_srev(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_unsigned(va_list val);
int printf_bin(va_list val);
int printf_oct(va_list val);
int printf_hex(va_list val);
int printfHEX(va_list args);
int printf_exclusive_string(va_list val);
int printf_pointer(va_list val);
int printf_rot13(va_list val);
int printf_hex_aux(unsigned long int num);

#endif
