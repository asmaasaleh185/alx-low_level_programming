#include  "main.h"
/**
 * _pow_recursion -a function that returns the value raised to the power
 * @x: int
 * @y: int
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
