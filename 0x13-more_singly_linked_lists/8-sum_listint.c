#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all the data of a list
 * @head: Pointer to first node
 * Return: The sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	if (head == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
