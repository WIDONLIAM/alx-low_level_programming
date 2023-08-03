#include "main.h"

/**
 * _pow_recursion - returns the vlaue of x raised tot he power y
 * @y: power
 * @x: value to be  raised
 *
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1)

	if (y == 0)

		return (1);

	return (n * _pow_recursion(x, y - 1));
}
