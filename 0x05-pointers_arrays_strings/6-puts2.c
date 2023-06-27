#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: The string to be printed
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c])
	{
		if (c % 2 == 0)
			_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
