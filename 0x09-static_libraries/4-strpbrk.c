#include "main.h"

/**
 * _strpbrk - WIll be our entry point
 * @s: is an input
 * @accept: Is an input
 *
 * Return: Always (0)
 */

char *_strpbrk(char *s, char *accept)
{
	int k = 0;

		while (*s)
		{
			for (accept[k]; k++)
			{
				if (*s == accept[k])

				return (s);
			}
			s++;
		}

		return ('\0');
}
