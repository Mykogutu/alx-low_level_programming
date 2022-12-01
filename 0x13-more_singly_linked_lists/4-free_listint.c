#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to struct
 *
 * Return: number of elements
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}`
