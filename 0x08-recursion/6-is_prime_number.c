#include "main.h"

int is_prime(int n, int guess);

/**
 * is_prime_number - Entry point
 * @n: number
 *
 *
 * Description: calls the is_prime function
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}


/**
 * is_prime - Checks if a number is a prime no.
 * @n: number
 * @guess: starting point
 *
 * Description: Checks if a no. is a prime no.
 *
 * Return: int
 */
int is_prime(int n, int guess)
{
	if (n < 2)
	{
		return (0);
	}
	
	if (guess > n/2)
	{
		return (1);
	}

	if (n % guess == 0)
	{
		return (0);
	}

	return (is_prime(n, guess + 1));
}
