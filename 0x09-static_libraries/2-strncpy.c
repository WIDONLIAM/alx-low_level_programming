#include "main.h"

/**
 * _strncpy - Will be coping a string
 * @src: Is an input value
 * @n: Is an input value
 * @dest: Is an input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

		while (j < n && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}

		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}

		return (dest);
}
