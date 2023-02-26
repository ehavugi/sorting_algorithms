#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insert_sort_list - implements insertion sort algo
 *
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t current;
	listint_t p;

	if (list == NULL || list->next == NULL)
		return;

	while (list != NULL)
	{
		current = list;
		if (head == NULL || current->n < head->n)
		{
			current->next=head;
			head = current;
		}
		else
		{
			p = head;
			while(p != NULL)
			{
				if (p->next == NULL || current->n < p->next->n)
				{
					current->next =p->next;
					p->next = current;
					print_list(list);
					break;
				}
				p = p->next;
		}
		}
	}
}
