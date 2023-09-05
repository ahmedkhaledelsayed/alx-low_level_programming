#include "main.h"

/**
* _strdup - function that returns a pointer to a newly allocated space,
*which contains a copy of the string given as a parameter.
*@str: pointer to a string.
*
* Return: pointer to the duplicated string
*/

char *_strdup(char *str)
{
	int index, size = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		size++;
	}
	arr = malloc(size + 1);
	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; str[index]; index++)
		{
			arr[index] = str[index];
		}
		arr[size] = '\0';
	}
	return (arr);
}
