#include "main.h"
/**
 * _strcat - concatenation
 * @dest: destination
 * @src: source
 * Return: concatenated str
*/
char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
dest = '\0';
return (result);
}
