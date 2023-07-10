#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Return a pointer to newly allocated space in memory,
 *		containing a copy of the string given as a parameter.
 * @str: The string to be duplicated
 *
 * Return: A pointer to hte duplicated string, or NULL if str is NULL
 *		or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
