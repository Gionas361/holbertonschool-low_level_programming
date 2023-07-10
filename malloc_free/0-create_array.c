#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - makes an array
  * 
  * @size: size of array
  * @c: idk
  * 
  * Return: Retuns 0
  */

char *create_array(unsigned int size, char c)
{
	char *ctoo;
	unsigned int s;

	ctoo = malloc(size * sizeof(c));
	for (s = 0 ; s != size ; s++)
	{
		ctoo[s] = c;
	}

	if (size == 0)
	{
		return (NULL);
	}
	else if (ctoo == NULL)
	{
		return (NULL);
	}

	return(ctoo);
}
