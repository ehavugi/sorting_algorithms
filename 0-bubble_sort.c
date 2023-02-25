
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "sort.h"
/**
 * bubble_sort - sort a list by bubble sort algo
 *
 * @array: array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	bool swapped = true;
	int temp = 0;
	size_t i;

	while (swapped)
	{
		swapped = false;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
	}
}
