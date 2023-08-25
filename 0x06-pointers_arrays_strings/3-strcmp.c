#include "main.h"

/**
* _strcmp - a function that compares two strings.
*@s1: pointer to the first string to be compared.
*@s2: pointer to the second string to be compared.
*
* Return: integer value that indicates the relationship
*/

int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] || s2[index]; index++)
	{
		if (s1[index] < s2[index])
		{
			return (-15);
		}
		else if (s1[index] > s2[index])
		{
			return (15);
		}
	}
	return (0);
}
