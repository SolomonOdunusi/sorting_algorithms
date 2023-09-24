#include "sort.h"

/**
 * selection_sort - it sorts an array of integers
 * with selection sort
 * @array: array of ints
 * @size: size of the array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i; j < size; j++)
			if (array[j] < array[min])
				min = j;
			if (min != i)
			{
				swap(&array[min], &array[i]);
				print_array(array, size);
			}
	}
}
