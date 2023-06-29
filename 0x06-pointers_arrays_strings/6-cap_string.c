#include "main.h"

/**
 * cap_string - Capitalizes all word of a string
 * @str: string to be capitalized
 * Return: Pointer to a string
 */
char *cap_string(char *str)
{
	int cap = 1;
	char *ptr = str;

	while (*ptr)
	{
		if (cap && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= 32;
			cap = 0;
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
			*ptr == ',' || *ptr == ';' || *ptr == '.' ||
			*ptr == '!' || *ptr == '?' || *ptr == '"' ||
			*ptr == '(' || *ptr == ')' || *ptr == '{' ||
			*ptr == '}')
		{
			cap = 1;
		}
	}
	return (str);
}
