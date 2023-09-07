#include "main.h"

/**
* malloc_checked - a function that allocates memory using malloc.
*@b: integer for the size of array.
*
* Return: void pointer
*/

void *malloc_checked(unsigned int b)
{
	char *arr = malloc(b);

	if (arr == NULL)
	{
		free(arr);
		exit(98);
	}
	return (arr);
}
