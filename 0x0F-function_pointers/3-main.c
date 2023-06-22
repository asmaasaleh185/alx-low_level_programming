#include "3-calc.h"
/**
 * main - check the code
 * @args: number of arguments
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int args, int **argv)
{
	int (*op_func)(int, int), a, b;

	if (aegs != 4)
		printf("Erroe\n", exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));
	return (0);
