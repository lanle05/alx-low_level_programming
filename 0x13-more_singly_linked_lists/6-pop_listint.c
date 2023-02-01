#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list and returns
 * its data (n)
 * @head: double pointer to head of list
 * Return: data (n) of deleted head node, or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	
	if (*head == NULL)
		return (0);
	
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	
	return (n);
}

