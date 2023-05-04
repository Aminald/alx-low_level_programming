#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if buffer is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l1, l2, len;
for (l1 = 0; n1[l1] != '\0'; l1++)
;
for (l2 = 0; n2[l2] != '\0'; l2++)
;
if (l1 > size_r || l2 > size_r)
return (0);
i = l1 - 1;
j = l2 - 1;
k = len = 0;
while (i >= 0 || j >= 0 || len < size_r - 1)
{
if (i >= 0)
len += n1[i--] - '0';
if (j >= 0)
len += n2[j--] - '0';
r[k++] = len % 10 + '0';
len /= 10;
}
r[k] = '\0';
for (i = 0, j = k - 1; i < j; i++, j--)
{
char tmp;
tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}
return (r);
}
