#include "main.h"

/**
 * print_sign - prints a sign of a number
 *
 * @n: the character to be checked
 *
 * Return: 1 and prints + if n is greater than 0,
 *
 * eles if 0 and prints 0, else -1 and prints -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else (n < 0)
	{
		putchar('-');
		return (0);
	}
}
