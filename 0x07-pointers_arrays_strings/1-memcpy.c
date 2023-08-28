#include "main.h"

/**
* _memcpy - function that fills memory with a constant byte.
*@src : pointer to a memory area source.
*@dest: pointer to a memory area to be filled.
*@n: integer to bytes of the memory area.
*
* Return: pointer to an string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		src[index] = dest[index];
		n--;
	}
	return (dest);
}
