#include "main.h"

/**
* rev_string - function that reverses a string.
*@s: pointer to string
*/

void rev_string(char *s)
{
	int index, size = 0;
	char temp;

	for (index = 0; s[index]; index++)
	{
		size++;
	}
	for (index = 0; index < (size / 2); index++)
	{
		temp = s[index];
		s[index] = s[size - index - 1];
		s[size - index - 1] = temp;
	}
}
