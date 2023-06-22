#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int print_triangle(int size)
{
	int height;
	int lenght;
	int hashtags;

	for (height = 1 ; height <= size ; height++)
	{
		for (lenght = (size - height) ; lenght > 0 ; lenght--)
		{
			printf(" ");
		}
		for (hashtags = (size - (size - height)) ; hashtags > 0 ; hashtags--)
		{
			printf("#");
		}
		printf("\n");
	}

	if (size <= 0)
	{
		_putchar('\n');
	}

	return (0);
}
