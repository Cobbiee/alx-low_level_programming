#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: A pointer to the modified string
 */

char *cap_string(char *str)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
				for (j = 0; separators[j] != '\0'; j++)
					if (str[i] == separators[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
						str[i + 1] = s[i + 1] - 32;
	}
	return (str);
}
