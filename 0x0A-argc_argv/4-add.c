#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, num, result;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
			return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

			if (num == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
					return (1);
			}

			result = sum + num;
	}

	printf("%d\n", result);

	return (0);
}