#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: THe array to iterate over
 * @size: The size of the array
 * @action: The function pointer to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
