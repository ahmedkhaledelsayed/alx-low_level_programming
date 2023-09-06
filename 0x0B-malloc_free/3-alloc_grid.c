#include "main.h"

/**
* alloc_grid - function that returns a pointer to a 2 dimensional array.
*@width: integer to width required.
*@height: integer to height required.
*
* Return: pointer to the 2 dimensional array .
*/

int **alloc_grid(int width, int height)
{
	int index, indexv;
	int **sout;

	sout = malloc(sizeof(*sout) * height);
	if (width <= 0 || height <= 0 || sout == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < height; index++)
	{
		sout[index] = malloc(sizeof(**sout) * width);
		if (sout[index] == NULL)
		{
			while (index--)
			{
				free(sout[index]);
			}
			free(sout);
			return (NULL);
		}
		for (indexv = 0; indexv < width; indexv++)
		{
			sout[index][indexv] = 0;
		}
	}
	return (sout);
}
