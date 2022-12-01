#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked linstint_t list
 * @h: pointer to struct
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int elements = 0;

	while(h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
