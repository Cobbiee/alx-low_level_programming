#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number
 *
 * Return: The natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root
 * @n: The number
 * @i: The current value to check as a potential square root
 *
 * Return: The square root of n if found, or -1 if it doesn't
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}
