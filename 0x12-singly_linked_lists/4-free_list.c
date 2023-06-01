#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: The head of the list.
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
