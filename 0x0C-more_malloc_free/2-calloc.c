#include "main.h"

/**
* _memset - fills memory with a constant byte.
*@s: pointer to put the constant
*@b: constant .
*@n: max bytes to use.
*
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s++ = b;
	}
	return (p);
}
/**
* _calloc - a function that allocates memory for an array, using malloc.
*@nmemb: array lenght
*@size: integer for the size of array.
*
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	malloc(sizeof(int) * nmemb);
	if (m == 0)
	{
		return (NULL);
	}
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
