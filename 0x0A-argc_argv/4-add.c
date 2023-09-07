#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that adds positive numbers.
*@argc: integer to arguments number.
*@argv: pointer to array of strings for arguments names.
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int res = 0, index;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (index = 0; index < argc; index++)
	{
		if (!isdigit(argv[index]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			res += atoi(argv[index]);
		}
	}
	printf("%d\n", res);
	return (0);
}
