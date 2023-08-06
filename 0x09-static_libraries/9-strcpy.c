#include "main.h"

/**
 * char *_strcpy - Will he a function that will be coping the string pointed to by src
 * @dest: Is where the string will be copied to
 * @src: Is where the string will be copied from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

		while (*(src + i) != '\0')
		{
			i++;
		}

		for ( ; j < i ; j++)
		{
			dest[j] = src[j];
		}
		dest[l] = '\0';

		return (dest);
}
