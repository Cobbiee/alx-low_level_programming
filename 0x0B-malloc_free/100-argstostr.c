#include "main.h"
#include <stdlib.h>
#include <sting.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total lenght of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total_len += len;
	}

	/* Add space for newlines and the terminating null byte */
	total_len += ac + 1;

	/* Allocate memory for the concatenated string */
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy each argument and add a newline */
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);

		for (j = 0; j < len; j++)
		{
			str[index] = av[i][j];
			index++;
		}

		str[index] = '\n';
		index++;
	}

	str[index] = '\0';

	return (str);
}
