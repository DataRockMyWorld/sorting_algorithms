#include "sort.h"
/**
 * bubble_sort - A sorting algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		flag = 0;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
