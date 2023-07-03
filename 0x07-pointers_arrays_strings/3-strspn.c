#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: THe string to search
 * @accept: THe string of accepted characters
 *
 * Return: The number of byte in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
	}
	return (count);
}
