#include "main.h"

/**
* create_array - function that  creates an array of chars,
* and initializes it with a specific char.
*@size: integer for the size of array.
*@c: char for the initializion value.
*
* Return: void
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	unsigned int index;

	if (size == 0 || arr == 0)
	{
		return (0);
	}
	for (index = 0; index < size; index++)
	{
		arr[index] = c;
	}
	return (arr);
}
