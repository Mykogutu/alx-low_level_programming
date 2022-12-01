#include "lists.h"

/**
 * add_nodeint - adds new node at the begining of a listint_t
 * @head: start of node
 * @n: value of node
 *
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
