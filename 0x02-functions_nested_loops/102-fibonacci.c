#include "main.h"

/**
 * print_fibonacci_numbers - prints the first n Fibonacci numbers, starting
 *                           with 1 and 2
 *
 * @n: the number of Fibonacci numbers to print
 *
 * Return: void
 */
void print_fibonacci_numbers(int n)
{
    int i, t1 = 0, t2 = 1, next_term;

    for (i = 1; i <= n; ++i) {
        printf("%d", t2);
        if (i != n)
            printf(", ");
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    printf("\n");
}
