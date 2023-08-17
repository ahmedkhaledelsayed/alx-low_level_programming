#include "main.h"

/**
* _isupper - function that checks for uppercase character.
* @c: character to be checked
* Return: 1 if true 0 if false
*/

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
