#include "main.h"
#include <stdlib.h>
/**
 * array_range - range of array
 * @min: minimum
 * @max: maximum
 * Return: array or NULL
*/
int *array_range(int min, int max)
{
int *arr;
int range = max - min;
int m = min;
int i = 0;
if (min > max)
{
return (NULL);
}
arr = malloc(range * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
while (i < range)
{
arr[i] = m;
i++;
m++;
}
return (arr);
}
