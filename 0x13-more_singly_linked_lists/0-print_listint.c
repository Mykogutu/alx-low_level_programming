#include "lists.h"

/**
 * print_listint - prints all the elements of a llistint_t list
 * @h: pointer to a struct
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int elements = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
