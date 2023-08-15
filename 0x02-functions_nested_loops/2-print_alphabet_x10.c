#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a c program that prints  alphabet, in lowercase
 *
*/

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}
	_putchar('\n');
}
