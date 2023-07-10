#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string since the first found accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int maxcount = 0, currstr;

	while (s[maxcount])
	{
		currstr = 0;

		while (accept[currstr])
		{
			if (s[maxcount] == accept[currstr])
			{
				s += maxcount;
				return (s);
			}

			currstr++;
		}

		maxcount++;
	}

	return ('\0');
}
