#include "lists.h"
/**
  * print_listint - Print all the elements of a list
  * @h: Elements of the list
  * Return: The number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

