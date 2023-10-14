#include "main.h"
/**
 * printf_hex - print an hexgecimal number.
 *
 * @val: arguments.
 *
 * Return: count.
 */
int printf_hex(va_list val)
{
	int k;
	int *ar;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	ar = malloc(counter * sizeof(int));

	for (k = 0; k < count; k++)
	{
		ar[k] = temp % 16;
		temp /= 16;
	}
	for (k = count - 1; k >= 0; k--)
	{
		if (ar[k] > 9)
			ar[k] = ar[k] + 39;
		_putchar(ar[k] + '0');
	}
	free(ar);
	return (count);
}
