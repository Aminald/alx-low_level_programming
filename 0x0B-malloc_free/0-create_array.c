#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of size 'size' and assign character 'c'
 *
 * @size: size of the array
 * @c: character to assign
 *
 * Description: creates an array of size 'size' and assign 'c' to each element.
 *
 * Return: Pointer to the created array, NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int a;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (a = 0; a < size; a++)
str[a] = c;
return (str);
}
