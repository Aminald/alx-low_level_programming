#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of size 'size' and assign character 'c'
 *
 * @size: size of the array
 * @c: character to assign
 *
 * Description: This function creates an array of size 'size' and assigns the character 'c' to each element.
 *
 * Return: Pointer to the created array, NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
array = malloc(sizeof(char) * size);
if (size == 0 || array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
