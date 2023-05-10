#include "main.h"

/**
 * str_len - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int str_len(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return (len);
}

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: A pointer to the string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
        return (1);

    if (s[start] != s[end])
        return (0);

    return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: A pointer to the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = str_len(s);

    if (len == 0 || len == 1)
        return (1);

    return (is_palindrome_recursive(s, 0, len - 1));
}
