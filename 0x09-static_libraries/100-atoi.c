#include "main.h"
/**
 * find_character - Find the first occurrence of a character in a string
 * @s: The string to search in
 * @c: The character to find
 * Return: If the character is found, a pointer to the first occurrence
 *     in the string. Otherwise, NULL.
 */
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (NULL);
}
