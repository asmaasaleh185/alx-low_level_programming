#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: size of an array
 * @cmp: pointer of the function
 * @array: int array
 * Return: int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		for (; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
