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
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

int rev_string(char *s)
{
	int currstr;
    int oposstr = 0;
	int countnum;
    char lettercurr;
    char s2[10];

	for (countnum = 0; s[countnum] ; countnum++)
	{}

	for (currstr = countnum ; currstr >= 0 ; currstr--)
	{
        strcpy(s2, s);
        lettercurr = s2[currstr];
        s[oposstr] = lettercurr;
        oposstr++;
	}

	return (0);
}
