#include "main.h"

/**
* _puts - function that returns the length of a string
*@str: pointer to string
*/

void _puts(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		printf("%c", str[index]);
	}
	printtf("\n");
}
