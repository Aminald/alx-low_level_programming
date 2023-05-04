/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0, j = 0;

    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    if (len1 >= size_r || len2 >= size_r)
        return (0);

    len1--;
    len2--;
    size_r--;
    while (len1 >= 0 || len2 >= 0 || carry)
    {
        sum = carry;

        if (len1 >= 0)
            sum += n1[len1--] - '0';

        if (len2 >= 0)
            sum += n2[len2--] - '0';

        carry = sum / 10;
        sum %= 10;

        if (i >= size_r)
            return (0);

        r[i++] = sum + '0';
    }

    if (i >= size_r)
        return (0);

    r[i] = '\0';

    for (j = 0; j < i / 2; j++)
    {
        char temp = r[j];
        r[j] = r[i - j - 1];
        r[i - j - 1] = temp;
    }

    return (r);
}
