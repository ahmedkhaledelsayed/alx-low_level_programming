#include "main.h"

int internal_is_prime_number(int n, int i);

/**
*is_prime_number -   function that returns 1 if the input is a prime number
*@n: integer for given number.
*
* Return: 1 for true 0 for false
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (internal_is_prime_number(n, n - 1));
}

/**
*internal_is_prime_number -  helper function for the is a prime number function
*@n: integer for given number.
*@i: integer for trials.
*
* Return: integer for result
*/

int internal_is_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (i);
	}
	if (n % i == 0 && i > 0)
	{
		return (-1);
	}
	else
	{
		return (internal_is_prime_number(n, i - 1));
		}
}
