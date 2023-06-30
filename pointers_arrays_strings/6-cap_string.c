#include "main.h"
#include <stdio.h>

/**
 * cap_string - prints cstr triangle
 *
 * @i: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
char *cap_string(char *i)
{
	int cstr;
	int setar;
	int expex = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (i[cstr])
	{
		setar = 0;

		while (setar < expex)
		{
			if ((cstr == 0 || i[cstr - 1] == spc[setar]) && (i[cstr] >= 97 && i[cstr] <= 122))
				i[cstr] -= 32;

			setar++;
		}

		cstr++;
	}

	return (i);
}
