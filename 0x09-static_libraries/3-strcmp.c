#include "main.h"

/**
 * _strcmp - Will be comparing string values
 * @s1: Is an input value
 * @s2: Is an input value
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}

		return (0);
}
