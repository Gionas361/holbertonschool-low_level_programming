#include "main.h"
#include <stdio.h>

/**
 * _strchr - prints a triangle
 *
 * @s: the string provided by the user
 * @c: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

char *_strchr(char *s, char c)
{
	int currstr;

	for (currstr = 0 ; s[currstr] != c ; currstr++)
	{
		if (s[currstr + 1] == c)
		{
			s += currstr + 1;
		}
	}

	return (s);
}
