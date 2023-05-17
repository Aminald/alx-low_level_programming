#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int length = 0i;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
