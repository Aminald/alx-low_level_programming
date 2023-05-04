#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer to buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i += 10)
{
/* print hex values */
printf("%08x: ", i);
/* print hex values */
for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", *(b + j));
else
printf("  ");
if (j % 2 != 0)
printf(" ");
}
/* print ascii values */
for (j = i; j < i + 10; j++)
{
if (j >= size)
break;
if (*(b + j) >= 32 && *(b + j) <= 126)
printf("%c", *(b + j));
else
printf(".");
}
_putchar('\n');
}
}
