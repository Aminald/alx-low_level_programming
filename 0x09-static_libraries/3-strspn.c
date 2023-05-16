#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search within
 * @accept: The string of acceptable characters
 * Return: Always 0 (Success)
 * that consist only of bytes from `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int z = 0;
int b;
while (*s)
{
for (b = 0; accept[b]; b++)
{
if (*s == accept[b])
{
z++;
break;
}
else if (accept[b + 1] == '\0')
return (z);
}
s++;
}
return (z);
}
