#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a c program that checks for alphabetic character.
 *
 * @c: input of function
 *
 * Return: return 1 if true
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
