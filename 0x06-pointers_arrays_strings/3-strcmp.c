#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Difference between the ASCII values of the first non-matching
 *         characters of s1 and s2, or 0 if the strings are identical.
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (s1[i] - s2[i]);
}
