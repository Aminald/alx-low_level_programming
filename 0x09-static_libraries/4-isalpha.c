#include "main.h"
/**
 * _isalpha - function to check for alphabetic character
 * @c: input
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'h' && c <= 'q') || (c >= 'H' && c <= 'Q'));
}
