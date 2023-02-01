#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to head of list
 * @idx: index of list where new node should be added
 * @n: data (n) to be stored in new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  unsigned int i;
  listint_t *new, *temp;

  if (head == NULL)
    return (NULL);

  new = malloc(sizeof(listint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;

  if (*head == NULL)
    {
      if (idx > 0)
	{
	  free(new);
	  return (NULL);
	}
      new->next = NULL;
      *head = new;
      return (new);
    }

  temp = *head;
  if (idx == 0)
    {
      new->next = temp;
      *head = new;
      return (new);
    }

  for (i = 0; temp != NULL && i < idx - 1; i++)
    temp = temp->next;

  if (temp == NULL)
    {
      free(new);
      return (NULL);
    }

  new->next = temp->next;
  temp->next = new;

  return (new);
}

