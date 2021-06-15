#include "sort.h"

/**
 * swap - swap element of array
 *
 * @xp: int
 * @yp: int
 *
 * Return: void
*/
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - sort array
 *
 * @array: array of int
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
