#include "main.h"
#include <stdlib.h>

/**
 * argstostr _ Will be our  main entry
 * @ac: Is the int input
 * @av: Is the double pointer array
 * Description: Concatenation of all the arguments of our program.
 *
 * Return: (0)
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, n, r = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
