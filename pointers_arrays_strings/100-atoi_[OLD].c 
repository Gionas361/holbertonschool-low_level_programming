#include "main.h"
#include <stdio.h>

/**
 * _atoi - prints a triangle
 *
 * @s: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
int main(void)
{
    int nb;

    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}

int determinenum(int val)
{
    if (val >= 48 && val <= 57)
    {
        val = val + 2 - 50;
    }

    return (val);
}

int _atoi(char *s)
{
	int stor = 0;
    int currstring = *s;
    int i = -1;
    int neg = 0;
    int dnum;

	for (currstring = 0; (s[currstring] != '\0') ; currstring++)
	{
        printf("Current number of letters: %d\n", currstring);

        if (s[currstring] == '-')
        {
            printf("FOUND A NEGATIVE\n");
            neg++;
        }

		if (s[currstring] >= '0' && s[currstring] <= '9')
        {
            i++;
            if (i > 0 && s[currstring] != '0')
            {
                printf("THIS IS THE NUMBER #%d: %d\n", i, determinenum(s[currstring]));
                stor += determinenum(s[currstring]) * (10^i);
                printf("%d\n", stor);
            }
            else if (s[currstring] == '0')
            {
                printf("THIS IS THE NUMBER #%d: %d\n", i, determinenum(s[currstring]));
                stor = stor * 10;
                printf("%d\n", stor);
            }
            else
            {
                printf("I FOUND THE FIRST NUMBER: %d\n", determinenum(s[currstring]));
                stor += determinenum(s[currstring]);
                printf("%d\n", stor);
            }
        }
	}
    printf("Final negative multiplication: ");
    stor = (stor * (-1^neg));

	return (stor);
}
