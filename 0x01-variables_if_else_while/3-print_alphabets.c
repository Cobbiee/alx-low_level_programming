#include <stdio.h>

/**
 * main - A program that prints lower and upper case alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
