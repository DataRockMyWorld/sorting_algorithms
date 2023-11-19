#include "sort.h"
/**
 * bubble_sort - A sorting algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, c;
	int ma = array[0];

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (ma < array[j])
				ma = array[j];
			if (ma > array[j])
			{
				c = array[j];
				array[j] = ma;
				array[j - 1] = c;
				print_array(array, size);
			}
		}
		ma = 0;
	}
}
