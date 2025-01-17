#include "calc.h"

/**
 * get_op_func - get the operation
 * @s: operator
 * Return: NULL or operation
*/

int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t opts[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
while (opts[i].op != NULL)
{
if (*(opts[i].op) == *s && s[1] == '\0')
{
return (opts[i].f);
}
i++;
}
return (NULL);
}
