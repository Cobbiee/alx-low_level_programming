#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get,
 * from one number to another
 * @n: a number
 * @m: another number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long int x = n ^ m ;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}
