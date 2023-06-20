#include <unistd.h>

/**
 * main - A program that prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", 9);

	return (0);
}
