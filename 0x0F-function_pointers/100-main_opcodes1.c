#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, int *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);

		if (i < n - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
