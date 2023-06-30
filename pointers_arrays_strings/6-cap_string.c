#include "main.h"
#include <stdio.h>

/**
 * cap_string - prints str triangle
 *
 * @i: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
char *cap_string(char *i)
{
	int str;
	int setar;
	int expex = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (i[str])
	{
		setar = 0;

		while (setar < expex)
		{
			if ((str == 0 || i[str - 1] == spc[setar]) && (i[str] >= 97 && i[str] <= 122))
				i[str] -= 32;

			setar++;
		}

		str++;
	}

	return (i);
}
