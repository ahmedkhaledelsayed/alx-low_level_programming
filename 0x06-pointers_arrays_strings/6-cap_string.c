#include "main.h"

/**
* cap_string - function that capitalizes all words of a string.
*@str: pointer to an string
*
* Return: pointer to an string
*/

char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 32;
	}
	for (index = 1; str[index]; index++)
	{
		if (str[index] == ' ' || str[index] == '\n')
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] -= 32;
			}
		}
	}
	return (str);
}
