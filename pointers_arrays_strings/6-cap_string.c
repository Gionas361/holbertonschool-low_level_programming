#include "main.h"
#include <stdio.h>

/**
 * string_string - prints a triangle
 *
 * @i: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
char *cap_string(char *i)
{
	int currstr;
	int countmax;
	int prevstr = -1;
	int s;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	for (countmax = 0 ; i[countmax] != '\0' ; countmax++)
	{
	}

	for (currstr = 0 ; currstr != countmax ; currstr++)
	{

		if ((i[currstr] >= 'a') && (i[currstr] <= 'z'))
		{
			for (s = 0; i[prevstr] == spc[s] ; s++)
			{
				i[currstr] -= 32;
			}
		}

		if (currstr == 0)
		{
			i[currstr] -= 32;
		}
		prevstr++;
	}

	return (i);
}
