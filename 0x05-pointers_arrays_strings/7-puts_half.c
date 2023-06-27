#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int j = 0;

	while (str[len])
		len++;

	j = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

	while (str[j])
		_putchar(str[j++]);
	_putchar('\n');
}
