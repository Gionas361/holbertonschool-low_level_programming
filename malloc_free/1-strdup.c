#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - makes an array
  * 
  * @str: size of array
  * 
  * Return: Retuns 0
  */

char *_strdup(char *str)
{
	char *dupstr;
    int s;

	for (s = 0 ; str[s] != '\0' ; s++)
	{
	}

	dupstr = malloc(s * sizeof(str));

	for (s = 0 ; str[s] != '\0' ; s++)
	{
		dupstr[s] = str[s];
	}

    if (str == NULL)
    {
        return (NULL);
    }
    if (dupstr == NULL)
    {
        return (NULL);
    }

    return (dupstr);
}
