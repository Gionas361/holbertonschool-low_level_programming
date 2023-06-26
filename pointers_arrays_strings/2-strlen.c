#include "main.h"
#include <stdio.h>

/**
 * swap_int - prints a triangle
 *
 * @s: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int _strlen(char *s)
{
	int charnum = 0;

	for (; s[charnum] != '\0' ; charnum++);

	return (charnum);
}
