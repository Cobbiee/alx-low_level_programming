#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: the function pointer to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
