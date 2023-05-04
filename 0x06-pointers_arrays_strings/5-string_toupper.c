#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String to modify
 *
 * Return: Pointer to modified string
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 'a' - 'A';
}
return str;
}
