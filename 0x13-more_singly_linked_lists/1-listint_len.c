#include "lists.h"
/**
 * listinit - Function that return the number of elements.
 * @h: Elements of the list.
 * Return: Return the number of the elements.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
