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
char *arr;
if (argc != 2)
{
printf("Usage: %s <number_of_bytes>\n", argv[0]);
exit(1);
}
bytes = atoi(argv[1]);
if (bytes <= 0)
{
printf("Error: Invalid number of bytes\n");
exit(2);
}
arr = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
return (0);
}
