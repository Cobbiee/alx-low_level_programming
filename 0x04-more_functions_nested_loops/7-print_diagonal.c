#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Check the number of times
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i = n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\');
}
