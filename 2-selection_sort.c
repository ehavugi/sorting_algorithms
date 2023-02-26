#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sort an array
 *
 * @array: array to sort
 * @size: number of elements in an array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, jmin;
	size_t temp;

	for (i = 0; i < size; i++)
	{
		jmin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jmin])
			{
				jmin = j;
			}
		}
		if (jmin != i)
		{
			temp = array[i];
			array[i] = array[jmin];
			array[jmin] = temp;
			print_array(array, size);
		}
	}

}
