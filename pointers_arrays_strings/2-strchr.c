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
	char *finaleval;

	for (currstr = 0 ; s[currstr] != c ; currstr++)
	{
		if (s[currstr + 1] == c)
		{
			finaleval = &s[currstr + 1];
		}
		else
		{
			finaleval = NULL;
		}
	}

	return (finaleval);
}
