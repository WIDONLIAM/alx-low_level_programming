#include "main.h"

/**
 *
 * memeset - fills a block of memory with a specific value
 * @b: desired value
 * @s: starting memory address to be filled
 * @n: number of bytes to be changed
 *
 * Return: new value of n bytes
 *
 */

char *_memset(unsigned int n, char b, char *s)
{

	int i;

		for (i = 0 n > 0; i++)
		{
			s[i] = b;
			n--;
		}

		return (s);
}
