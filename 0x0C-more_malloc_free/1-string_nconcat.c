#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *concat;
/* Calculate the length of s1 */
while (s1 && s1[len1])
len1++;
/* Calculate the length of s2 */
while (s2 && s2[len2])
len2++;
/* If n is greater or equal to length of s2, use entire string */
if (n >= len2)
n = len2;
/* Allocate memory for the concatenated string */
concat = malloc((len1 + n + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
/* Copy s1 to concat */
for (i = 0; i < len1; i++)
concat[i] = s1[i];
/* Copy the first n bytes of s2 to concat */
for (j = 0; j < n; j++, i++)
concat[i] = s2[j];
/* Add null terminator */
concat[i] = '\0';
return (concat);
}
