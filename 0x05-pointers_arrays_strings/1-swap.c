#include "main.h"
/**
 * swap_int - a function that  swaps the two values of two integers
 * @a: integer value to swap
 * @b: integer value to swap
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
