#include "main.h"
/**
 * is_prime_number -a function to check if the input integer is a prime number
 * @n: int number
 * @p: int
 * Return: int
 */
int prime(int n, int p);
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime -find prime number
 * @n: int
 * @p: int
 * Return: int
 */
int prime(int n, int p)
{
	if (p >= n && n > 1)
	{
		return (1);
	}
	else if (n % p == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, p + 1));
	}
}
