#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line of the arguments
 * @argv: The number of strings containing the arguments
 *
 * Return: always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
