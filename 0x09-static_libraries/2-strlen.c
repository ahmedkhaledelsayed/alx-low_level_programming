#include "main.h"

/**
* _strlen - function that returns the length of a string
*@s: pointer to char input
*
* Return: interger to the length
*/

int _strlen(char *s)
{
	int index, counter = 0;

	for (index = 0; s[index]; index++)
	{
		counter++;
	}
	return (counter);
}
