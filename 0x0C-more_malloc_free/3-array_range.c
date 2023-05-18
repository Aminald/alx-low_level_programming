#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: the pointer to the newly created array
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(size * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min++;
return (arr);
}
