#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - memory allocation grid
 * @width: width
 * @height: height
 * Return: result
*/
int **alloc_grid(int width, int height)
{
int i = 0;
int j;
int **grid;
if (width == 0 || height == 0)
{
return (NULL);
}
grid = malloc((height) * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
while (i < height)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
j = 0;
while (j < width)
{
grid[i][j] = 0;
j++;
}
i++;
}
return (grid);
}
