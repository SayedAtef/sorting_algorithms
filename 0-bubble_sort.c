#include "sort.h"

/**
 * bubble_sort - sorts an array ascending using bubble
 * sort algorithm
 * @array: array of integers to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int tmp;

	if (size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
		for (j = 1; j < size; j++)
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
}
