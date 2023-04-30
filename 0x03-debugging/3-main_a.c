#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
int month = 4;
int day = 1;
int year = 1997;
printf("Date: %02d/%02d/%04d\n", month, day, year);
print_remaining_days(month, day, year);
return (0);
}
