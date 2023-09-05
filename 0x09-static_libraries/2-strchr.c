#include "main.h"

/**
* _strchr - function that locates a character in a string.
*@s : pointer to a string.
*@c: char for character required.
*
* Return: pointer to first occurrence of the character.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ('\0');
}
