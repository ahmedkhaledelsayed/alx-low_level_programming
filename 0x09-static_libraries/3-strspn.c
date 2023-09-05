#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
*@s : pointer to a string.
*@accept: pointer to string containing the characters that form the set
*
* Return: pointer to first occurrence of the character.
*/

unsigned int _strspn(char *s, char *accept)
{
	int index1, index2;
	unsigned int count = 0;

	for (index1 = 0; s[index1]; index1++)
	{
		for (index2 = 0; accept[index2]; index2++)
		{
			if (s[index1] == accept[index2])
			{
				count++;
			}
		}
	}
	return (count);
}
