#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Prints anything.
 * @format: A string of format characters.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (prints (nil) if the string is NULL)
 *          Any other character is ignored.
 *
 * Description: This function prints anything based on the format string
 *              and variadic arguments provided.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
i++;
continue;
}
if (format[i + 1])
printf(", ");
i++;
}
va_end(args);
printf("\n");
}
