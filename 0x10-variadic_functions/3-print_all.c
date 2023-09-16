#include "variadic_functions.h"

/**
 * print_i - prints int
 * @list: arguement of list
 * @s: seperator
 * Return: none
 */
void print_i(va_list list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}
/**
 * print_c - prints char
 * @list: arguement char
 * @sep: seperator
 */
void print_c(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}
/**
 * print_s - prints string
 * @sep: seperator
 * @list: list to print
 * Return: none
 */
void print_s(va_list list, char *sep)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s%s", sep, s);
}
/**
 * print_f - prints floats
 * @sep: float to print
 * @list: next arguement of list to print
 * Return: none
 */
void print_f(va_list list, char *sep)
{
	printf("%s%2f", sep, va_arg(list, double));
}
/**
 * print_all - prints out all stuff
 * @format: format is list of types of arguements
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	int i = 0, j;
	token_t tokens[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}