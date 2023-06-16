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
	int n, l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* enter your code here*/

	l_d = n % 10;
	if (l_d > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
	}

	else if (l_d == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l_d);
	}

	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
	}
	return (0);
}
