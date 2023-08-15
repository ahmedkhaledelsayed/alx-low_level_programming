#include <stdio.h>
#include "main.h"

/**
 * main -  Entry point
 *
 * Description: a c program that prints  alphabet, in lowercase
 *
 * Return: 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	return (0);
}
