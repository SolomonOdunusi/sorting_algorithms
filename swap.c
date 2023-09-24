#include "sort.h"

/**
 * swap - it swaps two integers
 * @curr: current integer
 * @next: next integer
 * Return: void
*/

void swap(int *curr, int *next)
{
	int temp = *curr;
	*curr = *next;
	*next = temp;
}

/**
 * swap_list - it swaps two nodes of a doubly linked list
 * @curr: current node
 * @next: next node
 * Return: void
*/

void swap_list(listint_t *curr, listint_t *next)
{
	if (curr->prev != NULL)
		curr->prev->next = next;
	if (next->next != NULL)
		next->next->prev = curr;
	curr->next = next->next;
	next->prev = curr->prev;
	curr->prev = next;
	next->next = curr;
}
