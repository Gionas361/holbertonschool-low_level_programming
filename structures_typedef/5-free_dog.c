#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees' a dog structure
  * @d: The name of the dog.
  *
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	free(d);
}
