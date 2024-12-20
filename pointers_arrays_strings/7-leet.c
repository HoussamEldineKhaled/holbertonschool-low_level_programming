#include "main.h"
/**
 * leet - transform letters
 * @n: input string
 * Return: 1337 code
*/

char *leet(char *n)
{
int i = 0;
int j;
char l[] = "aAeEoOtTlL";
char nb[] = "4433007711";
while (n[i] != '\0')
{
j = 0;
while (l[j] != '\0')
{
if (n[i] == l[j])
{
n[i] = nb[j];
}
j++;
}
i++;
}
return (n);
}
