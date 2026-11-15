#include "main.h"

/**
 * _prime_helper - checks recursively if n is divisible by i
 * @n: number to check
 * @i: current divisor candidate
 *
 * Return: 1 if prime, 0 otherwise
 */
int _prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_helper(n, 2));
}
