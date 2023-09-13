#include "function_pointers.h"

/**
* array_iterator - function that executes a function given as a
*parameter on each element of an array.
*@array: pointer to array.
*@size: int to size.
*@action: pointer to function.
*
* Return: void pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
