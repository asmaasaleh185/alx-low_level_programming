#include "main.h"
/**
 * _isdigit - checks if character is digit
 * @c: character to be checked
 * Return: 1 (digit, 0 (otherwise)
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - find the length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
		;
	return (len);
}
/**
 * _mul -multiply two string numbers
 * @s1: first string number
 * @s2: second string number
 * Return: multiplication
 */
char *_mul(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(a = x = l1 + l2);

	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;
	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';
			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}
/**
 * main - multiply two strin numbers
 * @argc: number of srguments
 * @argv: list
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);
	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = _mul(argv[1], argv[2]);
	c = 0;
	a = 0;

	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
