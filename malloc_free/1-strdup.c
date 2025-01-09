#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: string
 * Return: null or strcpy
*/
char *_strdup(char *str)
{
int i = 0;
int length = 0;
char *strcpy;
if (str == NULL)
{
return (NULL);
}
while (str[length] != '\0')
{
length++;
}
strcpy = malloc((length + 1) * sizeof(char));
if (strcpy == NULL)
{
return (NULL);
}
while (i < length)
{
strcpy[i] = str[i];
i++;
}
strcpy[length] = '\0';
return (strcpy);
}
