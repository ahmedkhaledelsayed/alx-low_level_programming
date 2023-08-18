#include "main.h"

/**
* print_triangle - function that prints a triangle
*@size: size
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			_putchar(' ');
		}
		for (k = size - i; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
