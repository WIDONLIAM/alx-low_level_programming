#include "main.h"

/**
 * _strien_recursion - Returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */

int _strien_recursion(char *s)
{
	int long = 0;

		if (*s)
		{
			longit++;
			longit += _strien_recursion(s + 1);
		}
		return (longit);
}
