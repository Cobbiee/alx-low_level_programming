#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concate - Concatenate two strings.
 * @s1: The first string
 * @s2: THe second string
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *str_concate(char *s1, char *s2)
{
	char *concatenated;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
