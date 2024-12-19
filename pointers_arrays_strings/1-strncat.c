#include "main.h"
/**
 * _strcat - concatination with n
 * @dest: destination
 * @src: source
 * @n: number
 * Return: result 
*/

char *_strncat(char *dest, char *src, int n)
{
char *temp = dest;
int i = 0;
while (*dest != '\0')
{
dest++;
}
while (i < n && *src != '\0')
{
*dest = *src;
i++;
src++;
dest++;
}
dest = '\0';
return (temp);
}
