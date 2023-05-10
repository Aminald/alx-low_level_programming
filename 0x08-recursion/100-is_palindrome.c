#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len == 0 || len == 1)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - helper function to check if a string is a palindrome
 * @s: string to check
 * @start: starting index
 * @end: ending index
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	if (start >= end)
		return (1);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
