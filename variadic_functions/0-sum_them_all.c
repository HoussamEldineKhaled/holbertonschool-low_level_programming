#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all nbs
 * @n: number of arguements
 * Return: sum or 0
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list args;
if (n == 0)
{
return (0);
}
va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
va_end(args);
return (sum);
}
