#include "main.h"

/**
* swap_int -  function that swaps the values of two integers
*@a:  pointer to an int1
*@b:  pointer to an int2
*/

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
