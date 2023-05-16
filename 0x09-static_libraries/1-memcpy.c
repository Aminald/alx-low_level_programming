#include "main.h"
/**
 * _my_memcpy - copies a specified number of bytes from source to destination
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of bytes to copy
 * Return: pointer to the destination memory location
 */
char *_my_memcpy(char *dest, char *src, unsigned int n)
{
int i = n;
for (int r = 0; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
