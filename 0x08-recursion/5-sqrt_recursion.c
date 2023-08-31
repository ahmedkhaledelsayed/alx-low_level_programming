#include "main.h"

int internal_sqrt_recursion(int n, int i);

/**
*_sqrt_recursion -  function that returns the natural square root of a number
*@n: integer for given number.
*
* Return: integer for result
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (internal_sqrt_recursion(n, 0));
	}
}

/**
*internal_sqrt_recursion -  helper function to returns the base of the number
*@n: integer for given number.
*@i: integer for trials.
*
* Return: integer for result
*/

int internal_sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (internal_sqrt_recursion(n, i + 1));
	}
}
