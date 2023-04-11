#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array of integers.
 *
 * @grid: The 2D array to be freed.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory allocated for a 2D array
 * of integers.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}
