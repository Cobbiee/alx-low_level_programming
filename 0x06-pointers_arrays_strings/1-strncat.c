#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}
