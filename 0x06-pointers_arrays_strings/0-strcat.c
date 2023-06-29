#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Destination string
 *
 * @src: Source string
 *
 * Return: To string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* move the pointer to the end of thedest string */
	while (*ptr)
	{
		ptr++;
	}

	/* copy characters from src to the end of dest */
	while (*src)
	{
		*ptr++ = *src++;
	}

	/* add the terminate null byte */
	*ptr = '\0';

	return (dest);
}
