#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 * Return: 1 if is uppercase, else 0.
 */
int _isupper(int c)
{
	for (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
