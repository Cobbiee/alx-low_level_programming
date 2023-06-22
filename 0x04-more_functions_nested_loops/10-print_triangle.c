#include "main.h"

/**
 * print_triangle - Print a triangle, followed by a new line
 * @size: Checks the of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
