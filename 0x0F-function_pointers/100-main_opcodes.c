#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "function_pointers.h"
/**
 * main - Prints the opcodes of its own main function
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, or the corresponding error code
 */
int main(int argc, char **argv)
{
    int index = 0, num_bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    unsigned char *main_ptr = (unsigned char *)main;

    while (index < num_bytes)
    {
        printf("%02hhx", main_ptr[index]);
        if (num_bytes > index + 1)
            printf(" ");
        index++;
    }

    printf("\n");
    return 0;
}
