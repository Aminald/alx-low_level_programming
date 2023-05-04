#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int i, j, k, l1, l2, sum, carry;

        for (l1 = 0; n1[l1]; l1++)
                ;
        for (l2 = 0; n2[l2]; l2++)
                ;
        if (l1 > size_r || l2 > size_r)
                return (0);
        carry = 0;
        for (i = l1 - 1, j = l2 - 1, k = 0; k < size_r - 1; i--, j--, k++)
        {
                sum = carry;
                if (i >= 0)
                        sum += n1[i] - '0';
                if (j >= 0)
                        sum += n2[j] - '0';
                if (i < 0 && j < 0 && sum == 0)
                        break;
                carry = sum / 10;
                r[k] = (sum % 10) + '0';
        }
        if (i >= 0 || j >= 0 || carry != 0 || k == size_r - 1)
                return (0);
        r[k] = '\0';
        for (i = 0, j = k - 1; i < j; i++, j--)
        {
                sum = r[i];
                r[i] = r[j];
                r[j] = sum;
        }
        return (r);
}
