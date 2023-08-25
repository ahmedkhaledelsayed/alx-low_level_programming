#include "main.h"

/**
* _strncpy - a function that copies a string.
*@dest: pointer to the destination string.
*@src: pointer to the source string from which characters will be copied.
*@n: The maximum number of characters to copy.
*
* Return: pointer to an string1
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	dest[n] = '\0';
	return (dest);
}
