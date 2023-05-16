#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a given  string
 * @s: string to evaluate.
 * Return: number of words in the string.
 */
int count_word(char *s)
{
int flag, v, m;
flag = 0;
m = 0;
for (v = 0; s[v] != '\0'; v++)
{
if (s[v] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
m++;
}
}
return (m);
}
/**
 * **strtow - splits a string into an array of words.
 * @str: The string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int y, x = 0, len = 0, words, c = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (y = 0; y <= len; y++)
{
if (str[y] == ' ' || str[y] == '\0')
{
if (c)
{
end = y;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[x] = tmp - c;
x++;
c = 0;
}
}
else if (c++ == 0)
start = y;
}
matrix[x] = NULL;
return (matrix);
}
