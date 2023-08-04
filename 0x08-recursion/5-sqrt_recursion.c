#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - should return the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - will recurse to find the natural square root of a number
 * @i: iterator
 * @n: number for which to calculate the sqaure root of
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)

		return (-1);

	if (i * i == n)

		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
