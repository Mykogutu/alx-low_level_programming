#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer
 * @n: value of node
 *
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint **head, const int n)
{
	listint_t *lstnode;
	listint_t *tmp;

	lstnode = malloc(sizeof(listint_t));
	if (lstnode == NULL)
	{
		return (NULL);
	}
	lstnode->n = n;
	lstnode->next = NULL;
	if (*head == NULL)
	{
		*head == lstnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = lstnode;
	}
	return (*head);
}
