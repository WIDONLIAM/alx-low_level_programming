#include "main.h"

/**
 * wildcmp - Compares the strings
 * @s1: Is the pointer to the string params
 * @s2: Is the pointer to the string params
 *
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		return (*s2 = '\0');
	}

	if (*s2 == '*')
	{
		return (wildcp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0)
}
