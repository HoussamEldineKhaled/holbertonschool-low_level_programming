#include "main.h"
/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: copied value
*/

char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return start;
}
