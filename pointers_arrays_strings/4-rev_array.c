#include "main.h"
/**
 * reverse_array - switch arrays
 * @a: array
 * @n: size
*/

void reverse_array(int *a, int n)
{
int temp = 0;
int i = 0;
int j = n - 1;
while (i < n / 2 && j >= n/2)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j--;
i++;
}
}
