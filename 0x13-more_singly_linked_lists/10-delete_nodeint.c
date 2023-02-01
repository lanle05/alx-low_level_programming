#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head: head of linked list
 * @index: index of node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index) 
{
	listint_t *temp, *node_to_delete;
	unsigned int i;
	
	if (!head || !*head)
		return (-1);
	
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	
	for (i = 0; temp && i < index - 1; i++)
		temp = temp->next;
	if (!temp || !temp->next)
		return (-1);
	
	node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	free(node_to_delete);
	
	return (1);
}
