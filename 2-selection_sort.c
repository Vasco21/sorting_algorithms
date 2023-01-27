#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, x;
	int y, swap, src = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		y = i;
		src = 0;
		for (x = i + 1; x < size; x++)
		{
			if (array[y] > array[x])
			{
				y = x;
				src += 1;
			}
		}
		swap = array[i];
		array[i] = array[y];
		array[y] = swap;
		if (src != 0)
			print_array(array, size);
	}
}
