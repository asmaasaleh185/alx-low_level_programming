#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the number to be checked
 * Return: 1 for upper letter or 0 for else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
