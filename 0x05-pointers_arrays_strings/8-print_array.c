#include "main.h"

/**
 * print_array - Prints elements of an array of intergers
 * @a: array of integers
 * @n: number of elelment to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i < n - 1) ? printf(", ") : 0;
	}
	printf("\n");
}
