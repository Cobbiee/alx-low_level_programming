#include "main.h"

/**
 * is_separator - Checks if a character is aword separartor
 * @c: THe character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (sep[i] == c)
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: A pointer to the modified string
 */
char cap_string(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j == 0 || is_separator(str[j - 1]))
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
		}
	}
	return (str);
}
