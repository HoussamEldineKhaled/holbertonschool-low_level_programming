#include "main.h"
/**
 * _memset - change set
 * @s: input
 * @b: character
 * @n: number
 * Return: output
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}