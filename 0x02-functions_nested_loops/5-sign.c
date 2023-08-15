#include <stdio.h>
#include "main.h"

/**
 * print_sign - a c program that that prints the sign of a number.
 *
 * @n: input of function
 *
 * Return: return 1 if postive value return 0 if zero and return -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
