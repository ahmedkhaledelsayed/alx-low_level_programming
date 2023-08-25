#include "main.h"

/**
* leet - function that encodes a string into 1337.
*@str: pointer to an string
*
* Return: pointer to an string
*/

char *leet(char *str)
{
	int index1, index2;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711"

	for (index1 = 0; str[index1]; index1++)
	{
		for (index2 = 0; index2 < 10; index2++)
		{
			if (str[index1] == str1[index2])
			{
				str[index1] = str2[index2];
			}
		}
	}
	return (str);
}
