#include <stdio.h>

/**
 * main - Prints all the alphabet in tlower case except e and q.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
	putchar(c);
	}
	putchar('\n');
	return (0);
}
