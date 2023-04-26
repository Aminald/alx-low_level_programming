#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
int row, col, prod;
for (row = 0; row <= 9; row++)
{
_putchar('0'); /* print the first column */
_putchar(','); /* print the comma */
for (col = 1; col <= 9; col++)
{
prod = row * col; /* calculate the product */
if (prod <= 9)
{
_putchar(' '); /* print a space */
_putchar('0' + prod); /* print the product */
}
else
{
_putchar('0' + prod / 10); /* print the tens digit */
_putchar('0' + prod % 10); /* print the ones digit */
}
if (col < 9)
{
_putchar(','); /* print the comma */
_putchar(' '); /* print a space */
}
}
_putchar('\n'); /* print a newline */
}
}
