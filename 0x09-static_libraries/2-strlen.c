#include "main.h"
/**
 * _str_length - returns the length of a string
 * @str: string
 * Return: length
 */
int _str_length(char *str)
{
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
return length;
}
