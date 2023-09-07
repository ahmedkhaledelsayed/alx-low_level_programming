#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiplies two numbers.
*@argc: integer to arguments number.
*@argv: pointer to array of strings for arguments names.
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int res, n1, n2;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	if (argc == 3)
	{
		res = n1 * n2;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
