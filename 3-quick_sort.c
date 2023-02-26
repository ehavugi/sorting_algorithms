#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <stddef.h>
/**
 * swap  - function to swap elements
 * @a: first element
 * @b: second element
 * Return: void
 */
void swap(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}

/**
 * partition - partition by lomuto scheme
 * @arr: array
 * @low: low end of a subarray
 * @high: high end of a subarray
 * @size: number of elements in array
 * Return: int
 */
int partition(int arr[], int low, int high, size_t size)
{
	int pivot  = arr[high]; /* pivot */
	int j;
	int i = (low - 1);

	/*index of smaler element and indicates the right position of pivot so far */
	for (j  = low; j  <= high - 1 ; j++)
	{
		/* if current element is smaller than pivot */
		if (arr[j] <= pivot)
		{
			i++; /* increment the index of smaller element */
			if (i != j)
			{
			swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	i = i + 1;
	if (i != high)
	{
		swap(&arr[i], &arr[high]);
		print_array(arr, size);
	}
	return (i);
}

/**
 * quickSort -  quickSort internal implementation
 * @arr: array
 * @low: low bound for first subarray
 * @high: high index or pivot
 * @size: number of elements(optional for printing fx)
 */

void quickSort(int arr[], int low, int high, int size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, size);

		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - quick sort interface
 *
 * @array: array to size
 * @size: number of element in array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
