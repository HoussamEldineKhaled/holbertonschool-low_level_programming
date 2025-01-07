#include "main.h"
/**
 * _strlen_recusion - length recursive
 * @s: input char
 * Return: either 0 or length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
