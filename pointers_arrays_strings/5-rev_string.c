#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a triangle
 *
 * @s: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
void rev_string(char *s)
{
	int currstr;
    int oposstr = 0;
	int countnum;
    char lettercurr;
    char s2[10];

	for (countnum = 0; s[countnum] ; countnum++)
	{}

    strcpy(s2, s);

	for (currstr = countnum - 1 ; currstr >= 0 ; currstr--)
	{
        lettercurr = s2[currstr];
        s[oposstr] = lettercurr;
        oposstr++;
	}

}
