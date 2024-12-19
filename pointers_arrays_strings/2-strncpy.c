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
while (i < n)
{
*dest = *src;
i++;
src++;
dest++;
}
*dest = '\0';
return (tmp);
}
