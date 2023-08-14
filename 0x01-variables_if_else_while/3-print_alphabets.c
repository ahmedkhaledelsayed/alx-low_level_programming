#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: a c program that prints the alphabet in lowercase
 *
 * Return: 0
*/

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
