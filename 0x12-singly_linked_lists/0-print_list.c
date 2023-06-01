#include "lists.h"

/**
* print_list - Prints all the elements of a linked list.
* @h: The head of the list.
* Description: This function traverses the linked list starting from the head node (@h) and prints the contents of each node.
* Return: The number of nodes in the linked list.
*/

size_t print_list(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		if (cursor->str != NULL)
			printf("[%d] %s\n", cursor->len, cursor->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
