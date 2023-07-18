/**
  * To PRINT, or not to print. THAT IS THE QUESTION!!!
  */

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * init_dog - Initializes a dog structure
  * @d: dog structure.
  *
  * Return: Nothing
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if ((*d).name != NULL)
		{
			printf("%s\n", (*d).name);
		}
		else
		{
			printf("(nil)\n");
		}

		printf("Age: ");
		if ((*d).age != ' ')
		{
			printf("%f\n", (*d).age);
		}
		else
		{
			printf("(nil)\n");
		}

		printf("Owner: ");
		if ((*d).owner != NULL)
		{
			printf("%s\n", (*d).owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
