#include "main.h"
/**
 * _memset -set memory with a constant byte
 * @s: pointer to put the constant
 * @c: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char c, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = c;
	return (ptr);
}

/**
 * *_calloc -allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
