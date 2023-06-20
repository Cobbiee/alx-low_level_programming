#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the int to extract the last number from
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (n % 10) * -1;
	}

	else
	{
		last_digit = n % 10;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
