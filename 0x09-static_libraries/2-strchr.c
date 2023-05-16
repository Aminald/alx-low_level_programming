#include "main.h"
/**
 * _strchr - The entry point.
 * @s: An input.
 * @c: An input.
 * Return: Pointer to the first occurrence of character or NULL if not found
 */
char *_strchr(char *s, char c)
{
int r = 0;
for (; s[r] >= '\0'; r++)
{
if (s[r] == c)
return (&s[r]);
}
return (0);
}
