#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: A string to be printed
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

		while (a--)
			_putchar(s[i]);

	_putchar('\n');
}
