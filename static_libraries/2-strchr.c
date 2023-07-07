#include "main.h"
#include <stdio.h>

/**
 * _strchr - prints maxcount triangle
 *
 * @s: the string provided by the user
 * @c: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

char *_strchr(char *s, char c)
{
	int maxcount = 0;
	int currstr;

	while (s[maxcount])
	{
		maxcount++;
	}

	for (currstr = 0; currstr <= maxcount; currstr++)
	{
		if (c == s[currstr])
		{
			s += currstr;
			return (s);
		}
	}

	return ('\0');
}
