#include "sort.h"

/**
 * shell_sort - A sorting algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void shell_sort(int *array, size_t size)
{
	size_t j, i, gap = 1;
	int key;

	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{
		for (i = gap; i < size; ++i)
		{
			key = array[i];
			j = i;
			while (j >= gap && array[j - gap] > key)
			{
				array[j] = array[j - gap];
				j -= gap;
			}

			array[j] = key;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
