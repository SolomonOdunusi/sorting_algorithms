#include "sort.h"

/**
 * bubble_sort - it sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;
	bool swapped;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
	}
}