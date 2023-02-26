#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insert_sort_list - implements insertion sort algo
 *
 * @list: list to sort
 */

void insertion_sort_list(listint_t **listi)
{
	listint_t *head = NULL;
	listint_t *current;
	listint_t *p;
	listint_t *list;

	list = *listi;

	if (list == NULL || (list)->next == NULL)
		return;

	while (list != NULL)
	{
		current = list;
		list = list->next;
		if (head == NULL || current->n < head->n)
		{
			current->next=head;
			head = current;
			print_list(head);
		}
		else
		{
			p = head;
			while(p != NULL)
			{
				if (p->next == NULL || current->n < p->next->n)
				{
					current->next = p->next;
					p->next = current;
					print_list(head);
					break;
				}
				p = p->next;
		}
		}
		
	};
	listi= &head; 

}
