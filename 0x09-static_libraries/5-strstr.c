#include "main.h"
/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 * Return: If the substring is found, a pointer to the first occurrence
 * of the substring in the string is returned. Otherwise, NULL is returned
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *lh = haystack;
char *ln = needle;
while (*lh == *ln && *ln != '\0')
{
lh++;
ln++;
}
if (*ln == '\0')
return (haystack);
}
return (0);
}
