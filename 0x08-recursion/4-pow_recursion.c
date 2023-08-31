#include "main.h"

/**
* _pow_recursion - function that returns the value of x
* raised to the power of y
*@x: integer for given number.
*@y: integer for given number.
*
* Return: integer for result
*/

int _pow_recursion(int x, int y)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
