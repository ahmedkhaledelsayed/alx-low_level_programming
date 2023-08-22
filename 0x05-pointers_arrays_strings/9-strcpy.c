#include "main.h"

/**
* _strcpy - function that copies strings
*@dest: pointer to buffer
*@src: pointer to string
*
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = src[index];
	return (dest);
}
