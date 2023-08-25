#include "main.h"

/**
* reverse_array -  function that reverses the content of an array of integers.
*@a: pointer to array
*@n: number of elements of the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int index, temp;

	for (index = 0; index < (n / 2); index++)
	{
		temp = a[n - index - 1];
		a[n - index - 1] = a[index];
		a[index] = temp;
	}
}
