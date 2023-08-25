#include "main.h"

/**
* leet - function that encodes a string into 1337.
*@str: pointer to an string
*
* Return: pointer to an string
*/

char *leet(char *str)
{
	int index = 0;

	for (index = 0; str[index]; index++)
	{
		if (str[index] == 'a' || str[index] == 'A')
			str[index] = '4';
		else if (str[index] == 'e' || str[index] == 'E')
			str[index] = '3';
		else if (str[index] == 'o' || str[index] == 'O')
			str[index] = '0';
		else if (str[index] == 't' || str[index] == 'T')
			str[index] = '7';
		else if (str[index] == 'l' || str[index] == 'L')
			str[index] = '1';
	}
	return (str);
}
