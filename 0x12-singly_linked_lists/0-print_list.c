#include "lists.h"

/**
 * print_list - prints the elements present in the list
 * @h: first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h) 
{
	 size_t count = 0;
	 const list_t *current = h;
	 printf("[");
	 while (current != NULL)
	 {
		 if (current->str != NULL)
		 {
			  printf("%s", current->str);
		 }
		 else
		 {
			 printf("(nil)");
		 }
		 current = current->next;
		 count++;
	 }
	  printf("]\n");
	  return count;
}
