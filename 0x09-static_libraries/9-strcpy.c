#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 *			including the terminating null
 * @dest: The destination string
 * @src: The source string
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
