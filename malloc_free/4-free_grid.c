#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the grid
 * @grid: original grid
 * @height: grid height
*/

void free_grid(int **grid, int height)
{
int i = 0;
if (height <= 0 || grid == NULL)
{
return;
}
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
