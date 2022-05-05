#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h = Elements of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
