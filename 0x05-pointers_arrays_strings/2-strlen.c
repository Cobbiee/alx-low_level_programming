#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return(l);
}
