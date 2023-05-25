#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variadic arguments.
 *
 * Description: If separator is NULL, don't print it.
 * Prints a new line at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int i;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
