#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: a c program that prints the numbers by separation
 *
 * Return: 0
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');

		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}
