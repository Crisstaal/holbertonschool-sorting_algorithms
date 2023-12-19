#include "sort.h"

/**
 * swap_nodes - swaps two nodes
 *
 * @j: pointer
 * @b1: first node
 * @b2: second node
 */

void swap_nodes(listint_t **j, listint_t **b1, listint_t *b2)
{
	(*b1)->next = b2->next;
	if (b2->next != NULL)
		b2->next->prev = *b1;
	b2->prev = (*b1)->prev;

	b2->next = *b1;
	if ((*b1)->prev != NULL)
		(*b1)->prev->next = b2;
	else *j = b2;
	(*b1)->prev = b2;
	*b1 = b2-> prev;
}
