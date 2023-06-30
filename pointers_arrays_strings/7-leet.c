#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	char numstrs[] = {'4', '3', '0', '7', '1'};
	int currltr;
	int currstr;

	for (currstr = 0 ; s[currstr] != '\0' ; currstr++)
	{
		for (currltr = 0 ; currltr < 5 ; currltr++)
		{
	    	if (s[currstr] == letters[currltr] || s[currstr] - 32 == letters[currltr])
		    {
		    	s[currstr] = numstrs[currltr];
		    }
		}
	}

	return (s);
}