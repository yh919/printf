#include "main.h"
#include <stddef.h>
/**
 * printf_rot13 - Print a ROT13 encoded string.
 * @args: Arguments containing the string to encode.
 * Return: Number of characters printed.
 */
int printf_rot13(va_list args)
{
	int i, j, counter = 0;
	char *s = va_arg(args, char *);
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		int is_alpha = 0;

		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				is_alpha = 1;
				break;
			}
		}

		if (!is_alpha)
		{
			_putchar(s[i]);
			counter++;
		}
	}

	return counter;
}
