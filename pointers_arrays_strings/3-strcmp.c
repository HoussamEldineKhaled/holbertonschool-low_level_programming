#include "main.h"
/**
 * _strcmp - comparison
 * @s1: first str
 * @s2: second str
 * Return: difference
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
