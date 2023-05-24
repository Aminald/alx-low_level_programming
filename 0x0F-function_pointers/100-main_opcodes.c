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
int main(int argc, char *argv[])
{
int bytes;
uintptr_t l = (uintptr_t)main;
if (argc != 2)
{
printf("Error: Invalid number of bytes\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error: Invalid number of bytes\n");
exit(2);
}
while (bytes--)
{
printf("%02hhx%s", (unsigned char)*(unsigned char *)l++, bytes ? " " : "\n");
}
return (0);
}
