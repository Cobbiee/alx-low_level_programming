#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First character to be compared
 * @s2: Second character to be compared
 * Return: 0 if string are equal, else difference between first diff char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
