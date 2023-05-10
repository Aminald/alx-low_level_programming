#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0) /* If n is negative, return -1 */
		return (-1);
	else if (n == 0) /* Base case: factorial of 0 is 1 */
		return (1);
	else
		return (n * factorial(n - 1)); /* Recursive call */
}

