#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 *           identical, otherwise returns 0
 * @s1: the first string to compare
 * @s2: the second string to compare, which can contain the special character *
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0') /* both strings are empty */
return (1);
if (*s2 == '*') /* special case: * matches any string */
{
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1)); /* try to match rest of s2 */
else
return (wildcmp(s1 + 1, s2) || /* try to match rest of s1 */
wildcmp(s1, s2 + 1)); /* try to match rest of s2 */
}
if (*s1 == *s2) /* current characters match, advance both pointers */
return (wildcmp(s1 + 1, s2 + 1));
return (0); /* strings differ */
}
