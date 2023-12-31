#include "main.h"
#include <stdio.h>

/**
 * _strspn - search a string for a set of bytes
 * @s: source array
 * @accept: accepted string
 *
 * Return: number of bytes in the init segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int maxcount = 0, currstr, exast = 0;

	while (accept[maxcount])
	{
		currstr = 0;

		while (s[currstr] != 32)
		{
			if (accept[maxcount] == s[currstr])
			{
				exast++;
			}

			currstr++;
		}

		maxcount++;
	}

	return (exast);
}
