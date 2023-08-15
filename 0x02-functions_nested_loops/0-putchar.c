#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: a c program that prints _putchar
 *
 * Return: 0
*/

int main(void)
{
	int i;
	char a[] = "_putchar";

	for (i = 0; a[i]; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
