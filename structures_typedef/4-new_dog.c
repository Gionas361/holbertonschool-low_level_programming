#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - Initializes a dog structure
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Return: Nothing
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *store;
	int n, o, i;

	for (n = 0 ; name[n] != '\0' ; n++)
	{}
	for (o = 0 ; owner[o] != '\0' ; o++)
	{}

	store = malloc(sizeof(dog_t));

	if (store == NULL)
	{
		return (NULL);
	}

	(*store).name = malloc(sizeof(char) * n);

	if ((*store).name == NULL)
	{
		free(store);
		return (NULL);
	}

	(*store).owner = malloc(sizeof(char) * o);

	if ((*store).owner == NULL)
		{
		free((*store).name);
		free(store);
		return (NULL);
	}

	for (i = 0 ; i <= n ; i++)
	{
		(*store).name[i] = name[i];
	}

	for (i = 0 ; i <= n ; i++)
	{
		(*store).owner[i] = owner[i];
	}

	(*store).age = age;

	return (store);
}
