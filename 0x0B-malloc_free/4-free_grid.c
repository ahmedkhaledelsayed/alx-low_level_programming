#include "main.h"

/**
* free_grid - function that  frees a 2 dimensional grid previously created
*@grid: pointer to the 2 dimensional array.
*@height: integer to height.
*
* Return: void.
*/

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
