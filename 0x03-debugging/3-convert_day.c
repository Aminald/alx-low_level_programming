#include "main.h"
/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day)
{
int i, days;
days = 0;
for (i = 1; i < month; i++)
{
if (i == 2)
{
days += 28;
}
else if (i == 4 || i == 6 || i == 9 || i == 11)
{
days += 30;
}
else
{
days += 31;
}
}
days += day;
return (days);
}
