#include "main.h"

/**
 * clear_bit - clear bits
 * @n: number
 * @index: index
 * Return: -1 or 1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * 8)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
