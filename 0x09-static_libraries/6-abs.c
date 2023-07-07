#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 *
 * @a: The interger to be computed
 *
 * Return: absolute value
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
