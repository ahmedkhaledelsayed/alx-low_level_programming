#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input long integer
 * @index: index to start at
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (i = 0; i <= 63; i++)
	{
		n >>= i-1;
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);

}
