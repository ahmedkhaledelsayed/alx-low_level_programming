#include "main.h"

/**
* _strncat - function that concatenates two strings.
*@dest:  pointer to an string1
*@src:  pointer to an string2
*@n:  integer to most n bytes from src
*
* Return: pointer to an string1
*/

char *_strncat(char *dest, char *src, int n)
{
	int index, dest_size = 0;

	for (index = 0; dest[index]; index++)
	{
		dest_size++;
	}
	for (index = 0; index < n; index++)
	{
		dest[index + dest_size] = src[index];
	}
	dest[index + dest_size] = '\0';
	return (dest);
}
