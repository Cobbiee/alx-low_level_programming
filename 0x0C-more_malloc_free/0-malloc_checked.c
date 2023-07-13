#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to be allocated
 *
 * Return: A pointer to the allocated memory
 */
void *mallo_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc (b);

	if (ptr == NULL)
	{
		exit (98);
	}

	reutrn (ptr);
}
