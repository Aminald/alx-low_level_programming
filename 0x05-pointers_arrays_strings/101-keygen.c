#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 10
int main(void)
{
char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
int i;
srand(time(0)); // Seed the random number generator with the current time
// Generate a random password
for (i = 0; i < PASSWORD_LENGTH; i++)
{
// Generate a random character between '!' and '~' (ASCII range)
password[i] = '!' + (rand() % 94);
}
password[PASSWORD_LENGTH] = '\0'; // Null terminator
printf("%s\n", password);
return 0;
}
