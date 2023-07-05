#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Copy a string
 *
 * @s: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */  

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
