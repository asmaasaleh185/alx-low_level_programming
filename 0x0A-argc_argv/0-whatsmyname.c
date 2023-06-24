#include <stdio.h>
/**
 * main -  prints its name
 * @argc: int
 * @argv: list
 * Return: always 0 (success)
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
