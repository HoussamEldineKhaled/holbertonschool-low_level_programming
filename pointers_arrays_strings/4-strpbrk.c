#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - print available letters
 * @s: string inpt
 * @accept: letters to acpt
 * Return: NULL or res string
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
return (s + i);
}
j++;
}
i++;
}
return (NULL);
}
