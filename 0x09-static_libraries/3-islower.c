#include <stdio.h>
#include "main.h"

/**
 * _islower - a c program that checks alphabet in lowercase
 *
 * @c: input of function
 *
 * Return: return 1 if true
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
