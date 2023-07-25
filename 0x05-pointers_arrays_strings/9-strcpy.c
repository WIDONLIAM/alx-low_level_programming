#include "main.h"

/**
 * 'char'_stropy - a function that copies the string pointed to by the src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_ strcpy(char *dest, char *src
{
	int l = 0; int x = 0,

		while (*(src + l) != '\0')
		{
			l++;
		}

		for (; x < l; x++)
		{
			dest[x] = src[x];
		}

			est[l] = '\0';

			return (dest);
}
