#include "main.h"
/**
 * factorial - recursive factorial
 * @n: input number
 * Return: 0 1 or factorial result
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
