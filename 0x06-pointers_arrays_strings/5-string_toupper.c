#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: String to be changed
 * Return: Pointer to string str
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
