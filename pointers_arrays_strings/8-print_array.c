#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a triangle
 *
 * @a: the string provided by the user
 * @n: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

void print_array(int *a, int n)
{
	int currstr ;

	for (currstr = 0 ; currstr < n ; currstr++)
	{
		printf("%d", a[currstr]);
		if (currstr + 1 < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
