#include "main.h"

/**
* string_toupper -  function that changes all lowercase to uppercase.
*@str: pointer to an string
*
* Return: pointer to an string
*/

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
	}
}
