#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - binary to int
 * @b: binary char
 * Return: decimal number of NULL
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;
if (b == NULL)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
num <<= 1;
num += b[i] - '0';
i++;
}
return (num);
}
