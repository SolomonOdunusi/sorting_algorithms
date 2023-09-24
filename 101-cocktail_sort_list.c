#include "sort.h"

/**
 * cocktail_sort_list - it sorts a doubly linked list
 * of ints with cocktail sort
 * @list: doubly linked list
 * Return: void
*/

void cocktail_sort_list(listint_t **list)
{
	listint_t *curr, *next;
	int swapped = 1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = *list;
	while (swapped != 0)
	{
		swapped = 0;
		while (curr->next != NULL)
		{
			next = curr->next;
			if (curr->n > next->n)
				swap_list(curr, next);
				if (next->prev == NULL)
					*list = next;
				print_list(*list);
				swapped = 1;
			else
				curr = curr->next;
		}
		if (swapped == 0)
			break;
		swapped = 0;
		while (curr->prev != NULL)
		{
			next = curr->prev;
			if (curr->n < next->n)
				swap_list(next, curr);
				if (curr->prev == NULL)
					*list = curr;
				print_list(*list);
				swapped = 1;
			else
				curr = curr->prev;
		}
	}
}
