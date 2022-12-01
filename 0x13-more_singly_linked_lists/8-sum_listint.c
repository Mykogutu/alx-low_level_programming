#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to first node of linked list
 *
 * Return: sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
