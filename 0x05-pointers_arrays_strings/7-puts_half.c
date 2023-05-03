#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
int len = strlen(str);
int i, n;
n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
for (i = n; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
