#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: string
 *  Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int = 0, size = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	arr = malloc(size * sizeof(*str) + 1);

	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			arr[i] = str[i];
	}
	return (arr);
}
