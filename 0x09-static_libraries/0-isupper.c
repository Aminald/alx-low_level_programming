#include "main.h"
/**
 *  check_uppercase - checks if a given character is an uppercase letter
 *  @c: the character to check
 *  Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
