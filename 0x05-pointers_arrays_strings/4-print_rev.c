#include "main.h"
/**
 * print_rev - prints a reverse string followed by a new line
 * @s: the string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
