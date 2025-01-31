#include "main.h"


/**
 * get_bit - get the bit
 * @n: input number
 * @index: index of answer
 * Return: result or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(n) * 8))
{
return (-1);
}
return ((n >> index) & 1);
}
