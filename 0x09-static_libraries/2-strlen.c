#include "main.h"
/**
 * _strlen - a functuin that returns the length of a string
 * @s: the string input
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
