#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, x, 
	src = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (x = 0; x < size; x++)
		{
			if (array[x] > array[x + 1] && array[x + 1])
			{
			src = array[x];
			array[x] = array[x + 1];
			array[x + 1] = src;
			print_array(array, size);
			}
		}
}
