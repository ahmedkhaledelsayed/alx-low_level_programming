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

	while (str[size])
	{
		size++;
	}
	return (size);
}

/**
* string_nconcat - function that concatenates two strings.
*@s1: pointer to a string.
*@s2: pointer to a string.
*@n: integer for required number of s2.
*
* Return: pointer to the concatenated two strings.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1 = 0, size2 = 0;
	char *sout;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = str_length(s1);
	size2 = str_length(s2);
	if (n >= size2)
	{
		n = size2;
	}
	sout = malloc(size1 + n + 1);
	if (sout == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		sout[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		sout[size1 + i] = s2[i];
	}
	sout[size1 + n] = '\0';
	return (sout);
}
