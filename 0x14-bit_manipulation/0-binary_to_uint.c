#include "main.h"
/**
 * str_len - function that gives the string length.
 * @str: string to convert
 * Return: unsigned integer to length
 */
unsigned int str_len(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
	}
	return (i);
}
/**
 * str_ui - function that converts a string to integer.
 * @c: charcter required tobe converted
 * Return: unsigned integer to decimal number
 */
unsigned int str_ui(char c)
{
	return ((unsigned int) c - '0');
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string to convert
 * Return: unsigned integer to decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, out = 0, exp = 1, temp;
	if (b == NULL)
	{
		return (0);
	}
	for (len = str_len(b) - 1; b[len]; len--, exp *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		temp = str_ui(b[len]);
		out += temp * exp;
	}
	return (out);
}
