#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of parameters
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	va_end(args);

	return (result);
}
