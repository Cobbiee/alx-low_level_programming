#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t i, count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			i = h->len;
			if (i == 0)
				_putchar('0');
			else
			{
				while (i != 0)
				{
					_putchar(i % 10 + '0');
					i /= 10;
				}
			}
			_putchar(']');
			_putchar(' ');
			for (i = 0; i < h->len; i++)
				_putchar(h->str[i]);
			_putchar('\n');
		}
		count++;
		h = h->next;
	}
	return (count);
}
