#include "function_pointers.h"

/**
 * array_iterator - interate array
 * @array: input array
 * @size: array size
 * @action: printing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
