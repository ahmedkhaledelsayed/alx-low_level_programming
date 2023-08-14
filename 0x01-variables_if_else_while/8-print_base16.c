#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: a c program that prints the numbers of base 16
 *
 * Return: 0
*/

int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		putchar(c);
		if (c == '9')
		{
			c = 'a' - 1;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
