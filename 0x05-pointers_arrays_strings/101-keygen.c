#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int _putchar(char c);

/**
 * main - generates a random valid password for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
    int password[4];
    int i, sum;
    srand(time(NULL));

    do {
        sum = 0;
        for (i = 0; i < 4; i++) {
            password[i] = rand() % 256;
            sum += password[i];
        }
    } while (sum != 0x10);

    for (i = 0; i < 4; i++) {
        _putchar(password[i]);
    }
    _putchar('\n');

    return (0);
}

int _putchar(char c)
{
    return (write(1, &c, 1));
}

