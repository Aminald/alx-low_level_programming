#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int src_len = 0;
int i = 0;
while (src[src_len] != '\0')
{
src_len++;
}
for (; i < src_len; i++)
{
dest[i] = src[i];
}
dest[src_len] = '\0';
return (dest);
}
