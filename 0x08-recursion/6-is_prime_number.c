#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2)); /* Call the helper function */
}

/**
 * is_prime_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @divisor: The divisor to check divisibility
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1) /* Base case: 0 and 1 are not prime numbers */
		return 0;
	else if (n == divisor) /* Base case: n is only divisible by itself */
		return 1;
	else if (n % divisor == 0) /* Base case: n is divisible by a divisor */
		return 0;
	else
		return (is_prime_helper(n, divisor + 1)); /* Recursive call */
}

