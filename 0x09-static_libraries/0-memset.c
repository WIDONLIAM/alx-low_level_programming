#include "main.h"

/**
 * _memset - Will be filling a block of memory with a specific value allocated to it
 * @b: Is the value wanted
 * @n: Is the number of bytes to be changed
 * @s: Is the starting address of memory to be filled
 *
 * Return: new value for n bytes and a changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
