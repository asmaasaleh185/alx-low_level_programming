#include "function_pointers.h"
/**
 * array_iterator - executes each element of an array
 * @size:  size of the array
 * @action:  pointer to the function you need to use
 * @array: int array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size + 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
