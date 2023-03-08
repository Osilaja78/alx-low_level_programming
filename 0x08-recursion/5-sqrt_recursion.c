#include "main.h"

int _sqrt(int n, int guess);
/**
 * _sqrt_recursion - Entry point
 * @n: number
 *
 * Description: calls _sqrt function.
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - perform main program
 * @n: number
 * @guess: starting number
 *
 * Description: finds the sqrt of @n
 *
 * Return: sqrt of @n (int)
 */
int _sqrt(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}

	if (guess * guess == n)
	{
		return (guess);
	}
	else
	{
		guess++;
		return (_sqrt(n, guess));
	}
}
