#include "main.h"


/**
 * print_binary - binary printing
 * @n: decimal number
*/

void print_binary(unsigned long int n)
{
int bit = sizeof(n) * 8 - 1;
int start = 0;
while (bit >= 0)
{
if ((n >> bit) & 1)
{
_putchar('1');
start = 1;
}
else if (start)
{
_putchar('0');
}
bit--;
}
if (!start)
{
_putchar('0');
}
}
