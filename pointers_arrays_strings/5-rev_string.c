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
	int currstr, charcount, k;
	char *s2, aux;

	s2 = s;

	while (s[charcount] != '\0')
	{
		charcount++;
	}

	for (k = 1; k < charcount; k++)
	{
		s2++;
	}

	for (currstr = 0; currstr < (charcount / 2); currstr++)
	{
		aux = s[currstr];
		s[currstr] = *s2;
		*s2 = aux;
		s2--;
	}
}