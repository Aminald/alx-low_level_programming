#include <stdio.h>
/**
 * main - prints all possible combinations of three digits
 *
 * Return: 0 if successful
 */
int main(void)
{
int i, j, k;
/* Loop through all possible combinations of three digits */
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
{
/* Check for ascending order */
if (i < j && j < k)
{
/* Check for smallest combination */
if (i != 0 || j != 1 || k != 2)
{
/* Print comma and space */
putchar(',');
putchar(' ');
}
/* Print digits */
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
}
}
}
}
}
/* Print newline character */
putchar('\n');
return (0);
}
