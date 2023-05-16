#include "main.h"
/**
 * _strncat - function to concatenate two strings,
 * but with a limit on the number of bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes from src to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
int i = 0;
while (i < n && src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return (dest);
}
