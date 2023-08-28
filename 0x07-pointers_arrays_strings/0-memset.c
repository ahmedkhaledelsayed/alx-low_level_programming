#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
*@s: pointer to an string.
*@b: integer to constant byte.
*@n: integer to bytes of the memory area.
*
* Return: pointer to an string
*/

char *_memset(char *s, char b, unsigned int n);
{
	int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
