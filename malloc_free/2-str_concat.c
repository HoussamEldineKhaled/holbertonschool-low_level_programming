#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinate
 * @s1: first string
 * @s2: second string
 * Return: concatinated
*/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
char *sum;
int len1 = 0;
int len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
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
sum = malloc(sizeof(char) * (len1 + len2 + 1));
if (sum == NULL)
{
return (NULL);
}
while (i < len1)
{
sum[i] = s1[i];
i++;
}
while (j < len2 + 1)
{
sum[i] = s2[j];
j++;
i++;
}
sum[i] = '\0'; 
return (sum);
}
