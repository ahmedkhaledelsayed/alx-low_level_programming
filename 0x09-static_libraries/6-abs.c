#include <stdio.h>
#include "main.h"

/**
 * _abs - a c program that that computes the absolute value of an integer.
 *
 * @n: input of function
 *
 * Return: return n
*/

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
