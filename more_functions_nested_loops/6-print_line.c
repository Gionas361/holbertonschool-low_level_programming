#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line
 *
 * @n - the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0 ; n--)
		{
			printf("_");
		}
	}
	printf("\n");

	return (0);
}
