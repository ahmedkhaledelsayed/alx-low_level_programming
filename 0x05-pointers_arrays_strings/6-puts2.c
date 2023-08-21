#include "main.h"

/**
* puts2 - function that prints every other character of a string
*@str: pointer to string
*/

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] || str[index - 1]; index += 2)
	{
		printf("%c", str[index]);
	}
	printf("\n");
}
