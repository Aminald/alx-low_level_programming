#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no integer found
 */
int _atoi(char *s)
{
int sign = 1, num = 0, found_num = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
found_num = 1;
}
else if (found_num)
break;
s++;
}
return (num * sign);
}
