#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a c program that prints  alphabet, in lowercase
 *
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
