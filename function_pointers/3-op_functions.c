#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add nbs
 * @a: first int
 * @b: second int
 * Return: add result
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtract nbs
 * @a: first int
 * @b: second int
 * Return: subtract result
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiply nbs
 * @a: first int
 * @b: second int
 * Return: multiply result
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divide nbs
 * @a: first int
 * @b: second int
 * Return: division result
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - remainder nbs
 * @a: first int
 * @b: second int
 * Return: modular result
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
