#include "main.h"
/**
 * _pow_recursion - recursive power
 * @x: number
 * @y: power
 * Return: -1, 1, or power result
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
