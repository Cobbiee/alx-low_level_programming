#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(i < 10 ? '0' + i : 'a' + i - 10);
	}
	putchar('\n');
	return (0);
}
