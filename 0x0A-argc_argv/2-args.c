#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: int
 * @argv: list
 * Return: always 0 (success)
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
