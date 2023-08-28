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
	int index;

	for (index = 0; s[index]; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	return ('\0');
}
