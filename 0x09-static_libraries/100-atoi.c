#include "main.h"

/**
 * _atoi - Will be converting strings into an integers
 * @s: Is the string to be used
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;

	unsigned int res = 0;

		while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
		{
		if (s[i] == '-')

			i++;
			sign *= -1;
		}

		while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
		{
			res = (res * 10) + (s[i] - '0');
			i++;
		}

		res *= sign;

		return (res);
}
