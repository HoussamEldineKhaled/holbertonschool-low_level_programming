#include "main.h"
/**
 * string_toupper - uppercase
 * @n: input
 * Return: result n
*/
char *string_toupper(char *n)
{
int i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] -= 32;
}
i++;
}
return (n);
}
