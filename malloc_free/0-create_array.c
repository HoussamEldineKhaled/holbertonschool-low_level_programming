#include "main.h"
#include <stdlib.h>
/**
 * creat_array - array using malloc
 * @size: array size
 * @c: character input
 * Return: array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *arr = malloc(size * sizeof(char));
if (size == 0 || arr == NULL)
{
return (NULL);
}
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
