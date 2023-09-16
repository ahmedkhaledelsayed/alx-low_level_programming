#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to seperators
 * @n: integer to number of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *p;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(str, char *);
		if (p == NULL)
			printf("(nil)");
		else
		{
			printf("%s", p);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}