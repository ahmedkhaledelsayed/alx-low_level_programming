#include "main.h"

/**
* puts_half - function that prints half of a string, followed by a new line
*@str: pointer to string
*/

void puts_half(char *str)
{
	int index, size;

	for (index = 0; str[index]; index++)
	{
		size++;
	}
	for (index = 0; (size - 1) / 2; index++)
	{
		printf("%c", str[index]);
	}
	printf("\n");
}
