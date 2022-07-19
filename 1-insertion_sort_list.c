#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: Double pointer to the head of the linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
listint_t *exch_node, *next_exch;

if (list == NULL || *list == NULL)
return;
exch_node = (*list)->next;
while (exch_node != NULL)
{
next_exch = exch_node->next;
while (exch_node->prev != NULL && exch_node->prev->n > exch_node->n)
{
exch_node->prev->next = exch_node->next;
if (exch_node->next != NULL)
exch_node->next->prev = exch_node->prev;
exch_node->next = exch_node->prev;
exch_node->prev = exch_node->next->prev;
exch_node->next->prev = exch_node;
if (exch_node->prev == NULL)
*list = exch_node;
else
exch_node->prev->next = exch_node;
print_list(*list);
}
exch_node = next_exch;
}
}
