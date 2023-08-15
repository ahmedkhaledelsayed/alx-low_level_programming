#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a c program that prints the last digit of a number.
 *
 * @n: input of function
 *
 * Return: return n
*/

int print_last_digit(int n)
{
	int out;

	if (n < 0)
	{
		out = (n % 10) * -1;
	}
	else
	{
		out = n % 10;
	}
	_putchar(out + '0');
	return (out);
}
