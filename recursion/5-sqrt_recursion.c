#include "main.h"
/**
 * _sqrt_recursion_helper - helper function
 * @i: index
 * @n: number
 * Return: -1 or sqare root
*/


int _sqrt_recursion_helper(int i, int n)
{
if (n == i)
{
return (-1);
}
if (n / i == i && n % i == 0)
{
return (i);
}
return (_sqrt_recursion_helper(i + 1, n));
}

/**
 * _sqrt_recursion - recursive square root
 * @n: input number
 * Return: -1 , n , or helper func
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt_recursion_helper(2, n));
}
