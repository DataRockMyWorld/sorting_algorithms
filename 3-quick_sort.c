#include "sort.h"
/**
 * lomutoPartition - A sorting algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @low: argument
 * @high: argument
 *
 * Return: int
 */

int lomutoPartition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j, i = low - 1;
	int temp;
	size_t k;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;

			temp = array[i];
			array[i] = array[j];
			array[j] = temp;


			for (k = 0; k < size; k++)
			{
				printf("%d", array[k]);
				if (k < size - 1)
					printf(", ");
			}
			printf("\n");
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	for (k = 0; k < size; k++)
	{
		printf("%d", array[k]);
		if (k < size - 1)
			printf(", ");
	}
	printf("\n");

	return (i + 1);
}

/**
 * quickSort - A sorting algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @low: argument
 * @high: argument
 */
void quickSort(int *array, int low, int high, size_t size)
{
	int pivotIndex;

	if (low < high)
	{
		pivotIndex = lomutoPartition(array, low, high, size);

		quickSort(array, low, pivotIndex - 1, size);
		quickSort(array, pivotIndex + 1, high, size);
	}
}
/**
 * quick_sort - A sorting algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	quickSort(array, 0, size - 1, size);
}
