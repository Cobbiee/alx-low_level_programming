#include "function_pointers.h"

/**
 * print_name - Print a name using a function pointer
 * @name: THe name to print
 * @f: The function pointer to use
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
