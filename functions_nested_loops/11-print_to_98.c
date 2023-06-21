#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints out the last digit of the number string provided
 *
 * @n: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */
int print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}

	return (0);
}
