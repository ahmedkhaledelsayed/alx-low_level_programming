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

	for (index = 0; index < argc; index++)
	{
		if (argv[index] < '0' || argv[index] > '9')
		{
			printf("Error\n");
			return (1);
		}
	res += atoi(argv[index]);
	}
	printf("%d\n", res);
	return (0);
}
