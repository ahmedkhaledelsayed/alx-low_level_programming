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
	int res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int index = 1; index < argc; index++)
	{
		for (int j = 0; argv[index][j] != '\0'; j++)
		{
			if (!isdigit(argv[index][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[index]);
	}
	printf("%d\n", res);
	return (0);
}
