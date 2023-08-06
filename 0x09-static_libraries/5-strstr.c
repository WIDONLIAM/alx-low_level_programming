#include "main.h"

/**
 * _strstr - Will be the entry point
 * @needle: Is an input
 * @haystack: Is an input
 *
 * Return: Always (0)
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

		for (; *haystack != '\0'; haystack +)
		{

			while (*h == *n && *n != '\0')
			{
				h++;
				n++;
			}

			if (*n == '\0')

			return (haystack);
		}

		return (0);
}
