#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int i, count = 0, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			count++;

			while (str[i] != ' ' && i < len)
				i++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			 k++;

		 len = 0;
		 while (str[k + len] != ' ' && str[k + len] != '\0')
			 len++;

		 words[i] = malloc((len + 1) * sizeof(char));

		 if (words[i] == NULL)
		 {
			 for (j = 0; j < i; j++)
				 free(words[j]);
			 free(words);

			 return (NULL);
		 }

		 for (j = 0; j < len; j++)
			 words[i][j] = str[k++];

		 words[i][j] = '\0';
	}

	words[i] = NULL;

	return (words);
}
