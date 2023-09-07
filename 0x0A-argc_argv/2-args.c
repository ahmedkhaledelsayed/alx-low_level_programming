#include <stdio.h>

/**
* main - a program that prints all arguments it receives.
*@argc: integer to arguments number.
*@argv: pointer to array of strings for arguments names.
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; argc; index++)
	{
		printf("%s\n", argv[index]);
		argc--;
	}
	return (0);
}
