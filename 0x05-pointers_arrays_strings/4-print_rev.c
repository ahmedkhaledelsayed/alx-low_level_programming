#include "main.h"

/**
* print_rev - function that prints a string, in reverse
*@s: pointer to string
*/

void print_rev(char *s)
{
	int index, size = 0;

	for (index = 0; s[index]; index++)
	{
		size++;
	}
	for (index = 0; s[index]; index++)
	{
		printf("%s", s[size - index]);
	}
}
