#include "main.h"

/**
* _strstr - function that locates a substring.
*@haystack : pointer to a string.
*@needle: pointer to string containing the characters that form the set
*
* Return: pointer to first occurrence of the character.
*/

char *_strstr(char *haystack, char *needle)
{
	int index1, index2;

	for (index1 = 0; haystack[index1]; index1++)
	{
		char *h = &haystack[index1];
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack + index1);
		}
	}
	return (NULL);
}
