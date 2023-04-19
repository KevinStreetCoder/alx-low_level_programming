#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a function
 * on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to execute
 * on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
    	}
}
