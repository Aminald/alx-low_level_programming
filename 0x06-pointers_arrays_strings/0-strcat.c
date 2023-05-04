#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
/* find the end of the destination string */
while (*dest)
dest++;
/* copy the source string to the end of the destination string */
while (*src)
*dest++ = *src++;
/* add the terminating null byte */
*dest = '\0';
/* return pointer to destination string */
return (ptr);
}
