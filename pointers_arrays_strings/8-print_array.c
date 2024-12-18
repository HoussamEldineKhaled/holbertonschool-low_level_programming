#include "main.h"
#include <stdio.h>
/**
 * print_array - prints numbers
 * @a: array
 * @n: array size
*/
void print_array(int *a, int n)
{
int i = 0;
if (n <= 0)
{
printf("\n");
}
else
{
while (i < n)
{
if (i == n - 1)
{
printf("%d\n", a[i]);
break;
}
printf("%d, ", a[i]);
i++;
}
}
}
