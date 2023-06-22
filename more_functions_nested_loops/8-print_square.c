#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square with #.
 *
 * @size: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int print_square(int size)
{
	int lenght;
	int height;

	for (height = 0 ; height < size ; height++)
	{
		for (lenght = 0 ; lenght < size ; lenght--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

	return (0);
}
