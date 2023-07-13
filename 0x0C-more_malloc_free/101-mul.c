#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two positve numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Result of the multiplication
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	return (num1 * num2);
}

/**
 * is_pos_num - Checks of a string is a positve number
 * @str: The string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_pos_num(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array pof command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}

	if (!is_pos_num(argv[1]) || !is_pos_num(argv[2]))
	{
		printf("Error\n");
		return (1);
	}

			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			result = multiply(num1, num2);

			printf("%u\n", result);

			return (0);
}
