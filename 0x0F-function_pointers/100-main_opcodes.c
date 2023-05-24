#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - Prints the opcodes of its own main function
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, or the corresponding error code
 */
int main(int argc, char *argv[])
{
int bytes, i;
if (argc != 2)
{
printf("Error\n");
return 1;
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return 2;
}
/* Print the opcodes of the main function */
unsigned char *main_ptr = (unsigned char *)main;
for (i = 0; i < bytes; i++)
printf("%02x ", main_ptr[i]);
printf("\n");
return 0;
}
