#include "main.h"

/**
 * leet - encodes into 1337speak
 * @n: input valu
 *
 * Return: n value
 */

char *leet(char *n)
{
	int i = 0;
	int j = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (n[i] != '\0'; i++)
	{
		for (j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}

	return (n);
}
