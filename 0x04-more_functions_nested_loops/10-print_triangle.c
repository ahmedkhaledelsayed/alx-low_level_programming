#include "main.h"

/**
* print_triangle - function that prints a triangle
*@size: size
*/
void print_triangle(int size)
{
	int i, j, k;

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
	_putchar('\n');
}
