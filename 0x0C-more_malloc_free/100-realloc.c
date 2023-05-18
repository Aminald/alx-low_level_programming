#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc(old_size)
 * @old_size: Size of the allocated space for ptr, in bytes
 * @new_size: New size of the memory block, in bytes
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *src, *dest;
unsigned int i;
if (new_size == old_size)
return ptr;
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return NULL;
return new_ptr;
}
if (new_size == 0)
{
free(ptr);
return NULL;
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return NULL;
if (new_size < old_size)
old_size = new_size;
src = ptr;
dest = new_ptr;
for (i = 0; i < old_size; i++)
dest[i] = src[i];
free(ptr);
return new_ptr;
}
