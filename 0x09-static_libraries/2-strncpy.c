#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of characters to be copied
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int g;
g = 0;
while (g < n && src[g] != '\0')
{
dest[g] = src[g];
g++;
}
while (g < n)
{
dest[g] = '\0';
g++;
}
return (dest);
}
