#include "main.h"

/**
 * _put_recursion - Print a string recursively
 * @s: THe string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
