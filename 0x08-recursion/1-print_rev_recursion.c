#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse recursively
 * @s: String to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
