#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonals sums
 * @a:2D array
 * @size: array size
*/

void print_diagsums(int *a, int size)
{
int i = 0;
int sum1 = 0;
int sum2 = 0;
while (i < size)
{
sum1 += a[i * (size + 1)];
sum2 += a[(i + 1) * (size - 1)];
i++;
}
printf("%d, %d\n", sum1, sum2);
}
