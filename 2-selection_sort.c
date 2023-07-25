#include "sort.h"

/**
  * selection_sort - sorts using selection sort
  * @array: array to be sorted
  * @size: size of that array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int small, index, swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		small = array[i];
		for (j = (i + 1); j < size; j++)
		{
			if (small > array[j])
			{
				small = array[j];
				index = j;
			}
		}
		if (small != array[i])
		{
			swap = array[i];
			array[i] = small;
			array[index] = swap;
			print_array(array, size);
		}
	}
}
