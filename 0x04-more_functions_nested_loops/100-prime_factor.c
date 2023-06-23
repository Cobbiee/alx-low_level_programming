#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the larfest prime factor.
 *
 * @n: Checks the factor division.
 *
 * Return: laegestFactor
 */

long largest_prime_factor(long n)
{
	long largestFactor = -1;
	long i;

    /* Divide by 2 until it's no longer divisible */
	while (n % 2 == 0)
	{
		largestFactor = 2;
		n /= 2;
	}

	/* Check odd factors up to the square root of n */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largestFactor = i;
			n /= i;
		}
	}

	/* If n is prime and greater than 2 */
	if (n > 2)
		largestFactor = n;
	return (largestFactor);
}

/**
 * main - Initializes the number
 *
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	long largestFactor = largest_prime_factor(number);
	{
		printf("%ld\n", largestFactor);
	}
	return (0);
}
