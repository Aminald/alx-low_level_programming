#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	return (len);
}

/**
 * reverse_string - Reverses a string
 * @s: The string to be reversed
 */
void reverse_string(char *s)
{
	int start = 0;
	int end = _strlen(s) - 1;
	char temp;

	while (start < end)
	{
		temp = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len_sum;
	int sum, carry = 0;
	int i, j;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (size_r <= len1 || size_r <= len2)
		return (0);

	len_sum = len1 > len2 ? len1 : len2;

	r[len_sum] = '\0';
	len_sum--;

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--, len_sum--)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';

		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[len_sum] = (sum % 10) + '0';
	}

	if (carry != 0)
	{
		if (len_sum <= 0)
			return (0);

		r[--len_sum] = carry + '0';
	}

	if (len_sum < 0)
		return (0);

	reverse_string(r);

	return (r + len_sum);
}

