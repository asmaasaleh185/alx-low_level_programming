#include "main.h"
#include <stdio.h>
/**
 *  print_buffer - prints a buffer
 *  @b: buffer
 *  @size: size of buffer
 *  Return: void
 */
void print_buffer(char *b, int size)
{
	int i, c, e;

	e = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (e < size)
	{
		c = size - e < 10 ? size - e : 10;
		printf("%08x", e);
		for (i = 0; i < 10; i++)
		{
			if (i < c)
			{
				printf("%02x", *(b + e + i));
			}
			else
			{
				printf(" ");
			}
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < c; i++)
		{
			int d = *(b + e + i);

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		e += 10;
	}
}
