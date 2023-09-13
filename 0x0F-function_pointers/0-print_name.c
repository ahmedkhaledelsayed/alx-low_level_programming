#include "main.h"

/**
* print_name - a function that allocates memory using malloc.
*@name: pointer to name.
*@f: pointer to function.
*
* Return: void pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
