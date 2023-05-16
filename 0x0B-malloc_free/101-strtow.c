#include "main.h"
#include <stdlib.h>
/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in str
 */
int count_words(char *str)
{
int i, count = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
count++;
}
return (count);
}
/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of words, or NULL if str is NULL or empty
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, word_count;
if (str == NULL || *str == '\0')
return (NULL);
word_count = count_words(str);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0, j = 0; j < word_count; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
len = 0;
for (k = i; str[k] != '\0' && str[k] != ' '; k++)
len++;
words[j] = malloc((len + 1) * sizeof(char));
if (words[j] == NULL)
{
for (j--; j >= 0; j--)
free(words[j]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[j][k] = str[i + k];
words[j][k] = '\0';
j++;
}
}
words[word_count] = NULL;
return (words);
}
