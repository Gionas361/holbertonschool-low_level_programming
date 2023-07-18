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

	if (new_dog == NULL)
	{
		return (NULL);
	}

    for (n = 0 ; name[n] != '\0' ; n++)
    {}
    for (o = 0 ; owner[o] != '\0' ; o++)
    {}

    store = malloc((sizeof(char) * n) + (sizeof(char) * o));

    for (i = 0 ; i <= n ; i++)
    {
        (*store).name[i] = name[i];
    }

    for (i = 0 ; i <= n ; i++)
    {
        (*store).owner[i] = owner[i];
    }

    return (store);
}
