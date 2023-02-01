#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of list
 * @index: index of node to return, starting at 0
 * Return: nth node of linked list, or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	
	temp = head;
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;
	
	if (temp == NULL)
		return (NULL);
	
	return (temp);
}

