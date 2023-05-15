#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
_strdup - creates a duplicate of a string in a new memory location
@str: input string
Return: pointer to the duplicated string
*/
char *_strdup(char *str)
{
char *duplicate;
int i, length = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
length++;
i++;
}
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; str[i]; i++)
duplicate[i] = str[i];
return (duplicate);
}
