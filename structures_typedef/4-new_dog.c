#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

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
	int n, o;

	if (name != NULL && owner != NULL)
	{
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

		(*store).name = _strcpy((*store).name, name);
		(*store).owner = _strcpy((*store).owner, owner);
		(*store).age = age;
	}

	return (store);
}

char *_strcpy(char *dest, char *src)
{
	int currval;

	for (currval = 0 ; src[currval] != '\0' ; currval++)
	{
		dest[currval] = src[currval];
	}

	dest[currval++] = '\0';

	return (dest);
}
