#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: Elements of the list
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
