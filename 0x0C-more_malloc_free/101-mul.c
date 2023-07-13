#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @s: string pointer to be printed
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _stoi -convert a string to an int
 * @s: string
 * Return: converted int
 */
int _stoi(const char *s)
{
	int sign = 1;
	unsigned long int res = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		res *= 10;
		res += (s[i] - 48);
	}
	return (sign * res);
}

/**
 * _print - prints int
 * @n: int
 * Return: 0
 */
void _print(unsigned long int n)
{
	unsigned long int div = 1, i, res;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		res = n / div;
		_putchar('0' + res);
	}
}

/**
 * main -print the result of multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	_print(_stoi(argv[1]) * _stoi(argv[2]));
	_putchar('\n');
	return (0);
}
