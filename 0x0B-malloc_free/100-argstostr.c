#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program
 *             into a single string separated by a newline.
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
k++;
k++; /* For the '\n' character */
}
/* Allocate memory for the concatenated string */
str = malloc(sizeof(char) * (k + 1));
if (str == NULL)
return (NULL);
/* Concatenate the strings */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}
str[k] = '\0';
return (str);
}
