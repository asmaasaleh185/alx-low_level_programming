#include "main.h"

/**
 * *_calloc -allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	int i = 0, len = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	len = nmemb * size;
	m = malloc(len);

	if (m == 0)
		return (NULL);
	while (i < len)
	{
		m[i] = 0;
		i++;
	}
	return (m);
}
