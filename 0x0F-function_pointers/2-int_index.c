#include "function_pointers.h"

/**
* int_index - a function that searches for an integer.
*@array: pointer to array.
*@size: int to size.
*@cmp: pointer to function.
*
* Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
            {
                return (i);
            }
		}
	}
    else
    {
        return (-1);
    }
}
