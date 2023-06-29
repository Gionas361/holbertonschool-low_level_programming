#include "main.h"
#include <stdio.h>

/**
 * _strcmp - prints a triangle
 *
 * @s1: the string provided by the user
 * @s2: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

int _strcmp(char *s1, char *s2)
{
	int maxs1, maxs2, maxcount, currstr, finalval;

	for (maxs1 = 0 ; s1[maxs1]; maxs1++)
	{
	}

	for (maxs2 = 0 ; s2[maxs2]; maxs2++)
	{
	}

	if (maxs1 <= maxs2)
	{
		maxcount = maxs1;
	}
	else
	{
		maxcount = maxs2;
	}

	for (currstr = 0 ; currstr <= maxcount ; currstr++)
	{
		if (s1[currstr] == s2[currstr])
		{
			finalval = 0;
		}
		else
		{
			finalval = s1[currstr] - s2[currstr];
			currstr = maxcount;
		}

		currstr++;
	}

	return (finalval);
}
