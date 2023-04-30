#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: year to check
 * Return: 1 if leap year, 0 otherwise
 */
int is_leap_year(int year);

/**
 * print_remaining_days - prints the remaining days of a year
 * @month: month (1-12)
 * @day: day (1-31)
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int days;
days = convert_day(month, day);
if (is_leap_year(year) && month >= 3)
days++;
if (days != -1)
{
printf("Day of the year: %d\n", days);
printf("Remaining days: %d\n", 365 - days);
}
else
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
}
