#include "main.h"
/**
 * _strncpy - copy string to another
 * @dest: destination
 * @src: source
 * @n: number
 * Return: result
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
char *tmp = dest;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (tmp);
}
