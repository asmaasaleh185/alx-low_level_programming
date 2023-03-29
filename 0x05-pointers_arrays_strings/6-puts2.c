#include "main.h"
/**
 * puts2 -  prints every other character of a string followed by a new line
 * @str: The stringto be printed
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int c = 0;
	char *y = str;

	while (*y != '\0')
	{
		len++;
		y++;
	}
	for (; c < len; c++)
	{
	if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}
