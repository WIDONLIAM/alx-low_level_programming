#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Will be getting  ends of inputs and adding them  together for size
 * @s1: Is the input one to concat
 * @s2:Is the  input two to concat
 *
 * Return: concats of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, ci;
	char *conct;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
			i = ci = 0;

		while (s1[i] != '\0')
			i++;

		while (s2[ci] != '\0')
			ci++;

		conct = malloc(sizeof(char) * (i + ci + 1));

		if (conct == NULL)

		return (NULL);
			i = ci = 0;

		while (s1[i] != '\0')
		{
			conct[i] = s1[i];
			i++;
		}

		while (s2[ci] != '\0')
		{
			conct[i] = s2[ci];
			i++, ci++;
		}
			conct[i] = '\0';

		return (conct);
}