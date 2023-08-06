#include "main.h"

/**
 * _strncat - Will be concatenating two strings using at least n bytes from src
 * @src: Is an input value
 * @n: input value
 * @dest: Is an input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int k = 0;

		while (dest[i] != '\0')
		{
			i++;
		}

		while (k < n && src[k] != '\0')
		{
			dest[i] = src[k];

			k++;
			i++;
		}

		dest[i] = '\0';

		return (dest);
}
