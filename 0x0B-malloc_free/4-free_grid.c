#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D array
 *
 * @grid: 2D array to deallocate
 * @height: height dimension of the grid
 *
 * Description: This function frees the memory allocated for a 2D grid.
 * It iterates over each row of the grid and frees the memory associated
 * with it, and then frees the memory for the grid itself.
 */
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}

