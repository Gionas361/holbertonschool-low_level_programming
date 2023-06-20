#include "main.h"
#include <stdio.h>

/**
 * _islower - prints 1 of the string provided is a lower case letter
 *            and prints 0 if the string is anything else.
 *
 * int - is the string provided by the user
 * c - is the result of the calculation
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
