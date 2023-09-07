#include "main.h"

/**
* str_length - function that measure the string lenght
*@str: pointer to a string.
*
* Return: integer for the length.
*/

int str_length(char *str)
{
	int size = 0;

	while (str[index])
	{
		size++;
	}
	return (size);
}

/**
* string_nconcat - function that concatenates two strings
*@s1: pointer to a string.
*@s2: pointer to a string.
*@n: integer for required number of s2.
*
* Return: pointer to the concatenated two strings.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int index, size1 = 0, size2 = 0;
	char *sout;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	size1 = str_length(s1);
	size2 = str_length(s2);
	sout = malloc(size1 + size2 + 1);
	if (sout == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < (size1 + size2) && index < (size1 + s2); index++)
	{
		if (index < size1)
		{
			sout[index] = s1[index];
		}
		else
		{
			sout[index] = s2[index - size2];
		}
	}
	sout[index] = '\0';
	return (sout);
}
