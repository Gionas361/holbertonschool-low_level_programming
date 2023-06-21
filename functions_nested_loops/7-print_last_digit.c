#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints out the last digit of the number string provided
 *
 * @n: The string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int print_last_digit(int n)
{
	int f;
	f = n % 100;

	return (f);
	_putchar('\n');
}
