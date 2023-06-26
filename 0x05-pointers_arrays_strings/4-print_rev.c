#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: A string to be printed
 */
void print_rev(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		s++;
		{
			while (s--)
				_putchar(s[a]);
		}
	}
	_putchar('\n');
}
