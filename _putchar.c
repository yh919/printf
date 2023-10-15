#include <unistd.h>
#include <stddef.h>
void _putchar(char c)
{
    write(1, &c, 1);
}