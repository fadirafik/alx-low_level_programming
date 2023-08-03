#include "main.h"

/**
 * is_prime_number - recursively checks if n is a prime number
 * @n: user input
 *
 * Return: 1 if n is prime and 0 if n is not a prime number
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - checks if nume=ber is a prime number
 * @n: is the number to check
 * @i: the iterations
 *
 * Return: 1 if prime  0 if not
*/

int prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n < 0 || n == 1)
		return (0);
	if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}
