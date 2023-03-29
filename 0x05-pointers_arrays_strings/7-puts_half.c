#include "main.h"
/**
 * puts_half - prints half of a string followed by a new line
 * @str: the string to be printed
 * Return: void
 * Description: if odd number of char, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int len = 0;
	char *y = str;
	int i = 0;

	while (*y != '\0')
	{
		len++;
		y++;
	}
	for (i = (len / 2); ((i >= (len / 2)) && (i <= len)); i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
