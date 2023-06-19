#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the number to be checked
 * Return: 1 for digit and 0 for else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
