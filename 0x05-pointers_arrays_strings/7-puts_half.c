#include "main.h"

/**
* puts_half - function that prints half of a string, followed by a new line
*@str: pointer to string
*/

void puts_half(char *str)
{
	int index, size = 0;

	for (index = 0; str[index]; index++)
	{
		size++;
	}
	if (size % 2 == 0)
	{
		size = size / 2;
	}
	else
	{
		size = (size - 1) / 2;
	}
	for (index = size ; str[index]; index++)
	{
		printf("%c", str[index]);
	}
	printf("\n");
}
