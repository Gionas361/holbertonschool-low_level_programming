#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a triangle
 *
 * @str: the string provided by the user
 *
 * Return: gives out the result of calculation.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}

int _puts(char *str)
{
	int currstr;
	int countnum;

	for (countnum = 0; str[countnum] ; countnum++);

	for (currstr = 0 ; currstr <= countnum ; currstr++)
	{
		printf("%c", str[currstr]);
	}
	printf("\n");

	return (0);
}
