#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate conditionals
 * @s1: first string
 * @s2: second string
 * @n: second length
 * Return: null or concat
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
char *sum;
unsigned int len1 = 0;
unsigned int len2 = 0;
s1 = s1 ? s1 : "";
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
sum = malloc((len1 + n + 1) * sizeof(char));
if (sum == NULL)
{
return (NULL);
}
if (n >= len2)
{
n = len2;
}
while (i < len1)
{
sum[i] = s1[i];
i++;
}
while (j < n)
{
sum[i + j] = s2[j];
j++;
}
sum[i + j] = '\0';
return (sum);
}
