#include "main.h"

/**
 * rev_string - A function that reverse a string
 *
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char len;

	while (s[a])
		a++;

	while (a > b)
	{
		len = s[--a];
		s[a] = s[b];
		s[b++] = len;
	}
}
