#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: a pointer to be swaped
 * @b: a pointer to be swaped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
		*a = *b;
		temp = *b;
}
