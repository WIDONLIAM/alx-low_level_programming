#include "main.h"

/**
 *_memcpy - Is the function that will be coping the  memory area
 *@n: Is the number of bytes
 *@src: Is the memory to be copied to
 *@dest: Is the memory to be stored in
 *
 *Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	int r = 0;

		for (; r < i; r++)
		{
			dest[r] = src[r];
			n--;
		}

		return (dest);
}
