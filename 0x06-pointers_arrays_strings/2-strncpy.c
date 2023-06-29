#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: Destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: A pointer resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*ptr++ = '\0';
		n--;
	}
	return (dest);
}
