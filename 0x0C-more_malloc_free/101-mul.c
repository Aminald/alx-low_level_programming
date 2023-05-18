#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
/**
 * _strlen - Computes the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
size_t _strlen(const char *s)
{
size_t len = 0;
while (s[len] != '\0')
len++;
return (len);
}
/**
 * mul - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 */
void mul(const char *num1, const char *num2)
{
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int len_res = len1 + len2;
int *res;
int i, j, carry, n1, n2, sum;
res = malloc(sizeof(int) * len_res);
if (res == NULL)
exit(98);
for (i = 0; i < len_res; i++)
res[i] = 0;
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
n1 = num1[i] - '0';
for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum = (n1 *n2) +res[i + j + 1] + carry;
carry = sum / 10;
res[i + j + 1] = sum % 10;
}
if (carry > 0)
res[i + j + 1] += carry;
}
if (res[0] == 0)
i = 1;
else
i = 0;
for (; i < len_res; i++)
printf("%d", res[i]);
printf("\n");
free(res);
}
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !_isdigit(*argv[1]) || !_isdigit(*argv[2]))
{
printf("Error\n");
exit(98);
}
mul(argv[1], argv[2]);
return (0);
}
