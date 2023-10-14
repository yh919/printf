#include "main.h"
/**
 * printf_srev - function that print a str in reverse
 *
 * @args: type struct va_arg where it is allocated printf arguments
 *
 * Return: string
 */
int printf_srev(va_list args)
{

	char *s = va_arg(args, char*);
	int j;
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	return (i);
}
