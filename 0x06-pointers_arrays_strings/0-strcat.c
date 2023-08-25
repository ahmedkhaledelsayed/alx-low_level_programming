#include "main.h"

/**
* _strcat - function that concatenates two strings.
*@dest:  pointer to an string1
*@src:  pointer to an string2
*
* Return: pointer to an string1
*/

char *_strcat(char *dest, char *src)
{
	int index, dest_size = 0;

	for (index = 0; dest[index]; index++)
	{
		dest_size++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[index + dest_size] = src[index];
	}
	dest[index + dest_size] = '\0';
	return (dest);
