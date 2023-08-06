#include "main.h"

/**
 * _strchr - Entry@c: wil be our entry point
 * @c: Is an input
 * @k: Is an input
 *
 * Return: always (0)
 */

char *_strchr(char *k, char c)
{
	int i = 0;

		for (; k[i] >= '\0'; i++)
		{
			if (k[i] == c)

			return (&k[i]);
		}

		return (0);
}
