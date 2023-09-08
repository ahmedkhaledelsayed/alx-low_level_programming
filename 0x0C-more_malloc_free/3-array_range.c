#include "main.h"

/**
* array_range - function that creates an array of integers.
*@min: integer for min value.
*@max: integer for max value.
*
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int size = 0, index;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size;
	if (arr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		arr[index] = min++;
	}
	return (arr);
}
