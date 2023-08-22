#include "main.h"

/**
* print_array - function that prints n elements of an array
*@a: pointer to array
*@n: integer input
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index + 1 != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
