#include "main.h"
/**
 * _strlen - print lengeth of s
 * @s: string
 * Return: length of string
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}