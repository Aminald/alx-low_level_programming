#include "main.h"

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store result.
 * @size_r: Size of buffer.
 *
 * Return: Pointer to result, or 0 if buffer is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int len1, len2, carry, sum, i, j;

        for (len1 = 0; n1[len1]; len1++)
                ;
        for (len2 = 0; n2[len2]; len2++)
                ;
        if (len1 + 2 > size_r || len2 + 2 > size_r)
                return (0);
        carry = 0;
        for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
        {
                sum = carry;
                if (i >= 0)
                        sum += n1[i] - '0';
                if (j >= 0)
                        sum += n2[j] - '0';
                r[len1 + 1 + j] = (sum % 10) + '0';
                carry = sum / 10;
        }
        r[len1 + 1 + j] = '\0';
        return (r + len1 + 1 + j);
}
