#include "main.h"

/**
 * calculate_sqrt - Recursive helper function to calculate the square root
 * @n: The number to calculate the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root if found, otherwise -1
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n) /* Base case: square root found */
		return guess;
	else if (guess * guess > n) /* Base case: square root doesn't exist */
		return -1;
	else
		return calculate_sqrt(n, guess + 1); /* Recursive call */
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root if found, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* If n is negative, return -1 */
		return -1;
	else
		return calculate_sqrt(n, 0);
}

