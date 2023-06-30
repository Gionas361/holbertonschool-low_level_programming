#include "main.h"
#include <stdio.h>

/**
 * string_toupper - prints a triangle
 *
 * @i: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
char *string_toupper(char *i)
{
	int currstr;
	int countmax;

	for (countmax = 0 ; i[countmax] != '\0' ; countmax++)
	{
	}

	for (currstr = 0 ; currstr != countmax ; currstr++)
	{
        if ((i[currstr] >= 'a') && (i[currstr] <= 'z'))
        {
            i[currstr] -= 32;
        }
	}

	return (i);
}
