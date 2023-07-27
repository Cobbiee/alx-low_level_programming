#include "lists.h"

/**
 * _numlen - returns the number of digits in an integer
 * @n: the to count
 * Return: the number of digits
 */
int _numlen(int n)
{
	int count = 0;

	if (n == 0)
		return (1);
	if  (n < 0)
		count++;

	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/**
 * _itoa - converts an integer to a string
 * @n: the integer to convert
 * Return: a pointer to the string representation of n
 */
char *_itoa(int n)
{
	char *s;
	int i, len, sign;

	sign = n < 0 ? -1 : 1;
	len = _numlen(n);
	s = malloc(len + 1);

	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	i = len - 1;

	while (i >= 0)
	{
		s[i] = (n % 10) * sign + '0';
		n /= 10;
		i--;
	}
	if (sign == -1)
		s[0] = '-';
	return (s);
}

/**
 * print_list - prints all the of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;
	char *s;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			s = "[0] (nil)";
			while (*s)
				_putchar(*s++);
		}
		else
		{
			s = "[";
			while (*s)
				_putchar(*s++);
			s = _itoa(current->len);
			while (*s)
				_putchar(*s++);
			s = "]";
			while (*s)
				_putchar(*s++);
			s = current->str;
			while (*s)
				_putchar(*s++);
		}
		_putchar('\n');
		count++;
		current = current->next;
	}
	return (count);
}
