#include "main.h"

/**
* cap_string - function that capitalizes all words of a string.
*@str: pointer to an string
*
* Return: pointer to an string
*/

char *cap_string(char *str)
{
	int index = 0, indexarr;
	int a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 32;
	}
	for (index = 0; str[index]; index++)
	{
		for (indexarr = 0; indexarr < 13 ; indexarr++)
		{
			if (a[indexarr] == str[index])
			{
				if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
				{
					str[index + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
