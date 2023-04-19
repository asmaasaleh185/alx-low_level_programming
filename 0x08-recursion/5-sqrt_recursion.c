#include "main.h"
/**
 * _sqrt_recursion -a function that returns the natural square root of a number
 * @n: int
 * @val: squar root
 * Return: squar root
 */
int squar(int n, int val);
int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}
/**
 * squar - find squar root
 * @n: int to find squar root
 * @val: squar root
 * Return: int
 */
int squar(int n, int val)
{
if (val * val == n)
{
return (val);
}
else if (val * val < n)
{
return (squar(n, val + 1));
}
else
{
return (-1);
}
}
