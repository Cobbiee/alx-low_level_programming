#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - A program that assigns a random number stored in the variable n.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* enter your code here*/

	last_digit = n % 10;
	if (last_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	else if (last_digit < 6)
	{
	printf("Last digit of %d is %d and is less than 6\n", n, last_digit);
	}

	else
	{
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	return (0);
}
