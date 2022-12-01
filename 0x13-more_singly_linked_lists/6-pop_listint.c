#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to head pointer of list
 *
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (value);
}
