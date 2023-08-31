#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
*@s: pointer to an string.
*
* Return: integer for length
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
