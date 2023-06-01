#include "lists.h"

/**
 * list_len - Counts the number of nodes in a linked list.
 * @h: The head of the list.
 * Description: This function takes the head node of a linked list (@h) and iterates through the list to count the number of nodes.
 * Return: The number of nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
