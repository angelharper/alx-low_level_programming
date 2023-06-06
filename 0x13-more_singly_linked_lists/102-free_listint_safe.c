#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe -Function that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: The number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d_;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d_ = *h - (*h)->next;
		if (d_ > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

