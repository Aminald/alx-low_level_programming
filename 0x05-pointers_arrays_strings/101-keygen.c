#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * generate_password - Generates a random password
 *
 * Return: A pointer to the generated password string
 */
char *generate_password(void)
{
static char password[7];
int i;
srand(time(NULL));
for (i = 0; i < 6; i++)
{
password[i] = rand() % 94 + 33;
}
password[6] = '\0';
return password;
}
/**
 * main - Generates and tests random passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
char *password;
char command[50];
do {
password = generate_password();
sprintf(command, "./101-crackme \"%s\"", password);
} while (system(command) != 0);
printf("Valid password found: %s\n", password);
return 0;
}
