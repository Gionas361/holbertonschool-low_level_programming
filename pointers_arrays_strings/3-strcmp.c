#include "main.h"
#include <stdio.h>

/**
 * _strncat - prints a triangle
 *
 * @dest: the string provided by the user
 * @src: the string provided by the user
 * @n: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */

char *_strncmp(char *s1, char *s2)
{
	int maxs1, maxs2, maxcount, currstr, finalval;

    for (maxs1 = 0 ; s1[maxs1] != '\0' ; maxs1++)
    {
    }

    for (maxs2 = 0 ; s2[maxs2] != '\0' ; maxs2++)
    {
    }

    if (maxs1 <= maxs2)
    {
        maxcount = maxs1;
    }
    else
    {
        maxcount = max2;
    }

    for (currstr = 0 ; currstr <= maxcount ; currstr++)
    {
        if (s1[currstr] == s2[currstr])
        {
            currstr++;
        }
        else
        {
            finalval = s1[currstr] - s2[currstr];
            currstr = maxcount;
        }

        c++
    }
}
