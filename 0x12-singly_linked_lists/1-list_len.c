#include "lists.h"
/**
 * list_len - Function that return the number of th elements in a linked
 * @h: Elements
 * Return: The number of the elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
