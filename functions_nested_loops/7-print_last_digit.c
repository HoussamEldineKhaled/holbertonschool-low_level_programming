#include "main.h"
/**
 * print_last_digit - last number digit
 * @c: number input
 * Return: remainder
*/
int print_last_digit(int c)
{
int m = c % 10;
if (m < 0)
{
m *= -1;
}
_putchar('0' + m);
return (m);
}