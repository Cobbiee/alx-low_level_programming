#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: THe substring to find
 *
 * Return: A pointer to the beginning of the located substring,
 *		or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; j++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (hatstack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0);
}
