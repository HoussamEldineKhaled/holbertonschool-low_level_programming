#include "main.h"
/**
 * is_prime_number_helper - helper function
 * @i: index
 * @n: number
 * Return: 1 or 0
*/
int is_prime_number_helper(int i, int n)
{
if (n == i)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_number_helper(i + 1, n));
}
/**
 * is_prime_number - main function
 * @n: input number
 * Return: 0 or helper function
*/
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (is_prime_number_helper(2, n));
}
