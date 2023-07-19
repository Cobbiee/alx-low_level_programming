#include <stdlib.h>

/**
 * int_index - searches for an integer in an array using a function pointer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function pointer to use for comparison
 *
 * Return: the index of the first element that does not match 0, or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]) != 0)
			return (y);
	}

	return (-1);
}
