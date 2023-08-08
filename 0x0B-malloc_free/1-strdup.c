#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Will be duplicating in new memory space location
 * @str: Is the character
 *
 * Return: (0)
 */

char *_strdup(char *str)
{
	char *aaa;
	int i = 0;
	int r = 0;

		if (str == NULL)

		return (NULL);

		while (str[i] != '\0')
			i++;

		aaa = malloc(sizeof(char) * (i + 1));

		if (aaa == NULL)

		return (NULL);

		for (r = 0; str[r]; r++)
			aaa[r] = str[r];

		return (aaa);
}
