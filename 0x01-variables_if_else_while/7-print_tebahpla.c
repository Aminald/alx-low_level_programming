#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ascii_z = 122; /* ASCII value of lowercase z */
while (ascii_z >= 97) /* ASCII value of lowercase a */
{
putchar(ascii_z);
ascii_z--;
}
putchar('\n'); /* print new line after the alphabets */
return (0);
}
