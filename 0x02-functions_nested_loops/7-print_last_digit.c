#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0) /* if n is negative, make it positive */
n = -n;
last_digit = n % 10; /* get the last digit */
_putchar('0' + last_digit); /* print the last digit */
return last_digit;
}
