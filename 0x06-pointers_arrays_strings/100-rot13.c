#include "main.h"
/**
 * rot13 -  encodes a string using rot13
 * @n: pointer to string
 * Return: n
 */
char *rot13(char *n)
{
	int i;
	int c;
	char data_in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data_out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (c = 0; c < 52; c++)
		{
			if (n[i] == data_in[c])
			{
				n[i] = data_out[c];
				break;
			}
		}
	}
	return (n);
}
