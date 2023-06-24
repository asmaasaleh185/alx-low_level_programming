#include <stdio.h>
/**
 * main -prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 * Return: 0 (success), anything else (faild)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
