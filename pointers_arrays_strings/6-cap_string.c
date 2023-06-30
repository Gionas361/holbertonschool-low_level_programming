#include "main.h"
#include <stdio.h>

/**
 * cap_string - prints st triangle
 *
 * @i: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
char *cap_string(char *i)
{
	int st;
	int setar;
	int expex = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (i[st])
	{
		setar = 0;

		while (setar < expex)
		{
			if ((st == 0 || i[st - 1] == spc[setar]) && (i[st] >= 97 && i[st] <= 122))
				i[st] -= 32;

			setar++;
		}

		st++;
	}

	return (i);
}
