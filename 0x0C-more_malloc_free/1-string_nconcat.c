#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, with n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or Null on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *p;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	if (n >= len2)
		n = len2;

	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';

	return (p);
}
