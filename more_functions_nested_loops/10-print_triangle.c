#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
*/
void print_triangle(int size)
{
int i = 1;
int k;
if (size <= 0)
{
_putchar('\n');
}
while (i <= size)
{
int j = 1;
while (j <= size - i)
{
_putchar(' ');
j++;
}
k = (size - i) + 1;
while (k <= size)
{
_putchar('#');
k++;
}
_putchar('\n');
i++;
}
}
