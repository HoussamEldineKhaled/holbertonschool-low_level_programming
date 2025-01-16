#include "function_pointers.h"
/**
 * int_index - find index
 * @array: input array
 * @size: size of array
 * @cmp: function to excecute
 * Return: -1 or i
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <=0 || cmp == NULL)
{
return (-1);
}
i = 0;
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}
