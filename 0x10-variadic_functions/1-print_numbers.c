#include "variadic_functions.h"

/**
 *  print_numbers - function that prints numbers, followed by a new line.
 * @separator: pointer to string
 * @n: integer to number of arguements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}