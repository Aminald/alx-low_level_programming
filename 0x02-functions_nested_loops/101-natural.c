#include "main.h"

/**
 * sum_multiples - computes the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: the sum of the multiples
 */
int sum_multiples(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return (sum);
}

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = sum_multiples();

	/* Print the sum using _putchar */
	if (sum == 0)
		_putchar('0');
	else if (sum < 0)
	{
		_putchar('-');
		sum = -sum;
	}
	else
	{
		while (sum / 10 > 0)
		{
			_putchar(sum % 10 + '0');
			sum /= 10;
		}
		_putchar(sum % 10 + '0');
	}

	_putchar('\n');

	return (0);
}
