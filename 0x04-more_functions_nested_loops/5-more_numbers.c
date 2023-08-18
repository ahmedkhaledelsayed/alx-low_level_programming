#include "main.h"

/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14
*
* Return: Always 0
*/

void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchar(49);
				num = j % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
