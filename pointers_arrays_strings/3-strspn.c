#include "main.h"
/**
 * _strspn - substring
 * @s: big string
 * @accept: small string
 * Return: total count
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
int found;
unsigned int count = 0;

while (s[i] != '\0')
{
found = 0;
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
found = 1;
break;
}
j++;
}
if (found == 0)
{
break;
}
count++;
i++;
}
return (count);
}
