#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
int i, j;
char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
i = 0;
while (s[i] != '\0')
{
j = 0;
while (letter[j] != '\0')
{
if (s[i] == letter[j])
{
s[i] = rot13[j];
break;
}
j++;
}
i++;
}
return (s);
}
