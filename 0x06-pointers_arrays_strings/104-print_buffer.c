#include "main.h"
/**
 * print_buffer - Prints a buffer
 *
 * @b: Buffer to print
 * @size: Size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = i; j < i + 10; j += 2)
{
if (j < size)
printf("%02x", *(b + j));
else
printf("  ");
if (j + 1 < size)
printf("%02x ", *(b + j + 1));
else
printf("   ");
}
for (k = i; k < i + 10; k++)
{
if (k >= size)
break;
if (*(b + k) >= 32 && *(b + k) <= 126)
_putchar(*(b + k));
else
_putchar('.');
}
_putchar('\n');
}
}
