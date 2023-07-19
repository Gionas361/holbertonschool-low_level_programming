#include "function_pointers.h"

/**
  * array_iterator - provides the values of the array to the given function.
  * @array: the array provided.
  * @size: size of the array.
  * @action: function that will use the code.
  *
  * Return: Nothing.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int currVal, maxVal;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (maxVal = 0 ; array[maxVal] != '\0' ; maxVal++)
		{
		}

		for (currVal = 0 ; currVal <= maxVal ; currVal++)
		{
			action(array[currVal]);
		}
	}
}
