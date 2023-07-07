#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
*/
void print_binary(unsigned long int num)
{
unsigned long int temp = num;
int binary[64]; // Assuming 64-bit number
int index = 0;
while (temp > 0) {
binary[index] = temp % 2;
temp /= 2;
index++;
}
if (num == 0) {
_putchar('0');
}
else
{
for (int i = index - 1; i >= 0; i--) {
_putchar(binary[i] + '0');
}
}
}
