#include "main.h"


/**
 * flip_bits - flips bits of number
 * @n: number
 * @m: other number
 * Return: result
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;
while (xor)
{
count += xor & 1;
xor >>= 1;
}
return (count);
}
