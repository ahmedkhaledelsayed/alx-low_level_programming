#include "main.h"

/**
* print_diagsums -  function that prints the sum of the two diagonals
*@a : pointer to a two dimentional array.
*@size : integer to array size.
*
* Return: void.
*/

void print_diagsums(int *a, int size)
{
	int index;
	long sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index * size + index];
		sum2 += a[index * size + size - 1 - index];
	}
	printf("%ld, %ld\n", sum1, sum2);
}
