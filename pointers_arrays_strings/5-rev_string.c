#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a triangle
 *
 * @s: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
