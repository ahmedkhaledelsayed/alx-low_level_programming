#include "main.h"

unsigned int str_len(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
	}
	return (i);
}

unsigned int str_ui(char c)
{
	return ((unsigned int) c - '0');
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, out = 0, exp = 1, temp;
	if (!b)
	{
		return (0);
	}
	for (len = str_len(b) - 1; b[len];len--, exp *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		temp = str_ui(b[len]);
		out += temp * exp;
		//printf("enter for loop len %d \n out = %d \n", len, out);
	}
	return (out);
}