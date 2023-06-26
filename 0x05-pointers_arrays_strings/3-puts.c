#include "main.h"

/**
 * _puts - A function that prints a string
 *
 * @str: A pointer to a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
				str++;
	}
	_putchar('\n');
}
