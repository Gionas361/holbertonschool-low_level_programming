#include "main.h"
#include <stdio.h>

/**
 * string_string - prints currstr triangle
 *
 * @i: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
char *cap_string(char *i)
{
	int currstr;
    int setar;
    int expex = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (i[currstr])
	{
		setar = 0;

		while (setar < expex)
		{
			if ((currstr == 0 || i[currstr - 1] == spc[setar]) && (i[currstr] >= 97 && i[currstr] <= 122))
				i[currstr] -= 32;

			setar++;
		}

		currstr++;
	}

	return (i);
}
