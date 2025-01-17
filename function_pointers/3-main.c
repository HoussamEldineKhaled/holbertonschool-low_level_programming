#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main method
 * @argc: size of argv
 * @argv: array inputs
 * Return: 0
*/
int main(int argc, char *argv[])
{
int n, m, answer;
int (*op)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
n = atoi(argv[1]);
m = atoi(argv[3]);
op = get_op_func(argv[2]);
if (op == NULL)
{
printf("Error\n");
exit(99);
}
answer = op(n, m);
printf("%d\n", answer);
return (0);
}
