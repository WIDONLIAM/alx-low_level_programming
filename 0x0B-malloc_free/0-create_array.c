#include "main.h"
#include <stdlib.h>

/**
 * create_array - Will be creating  an array of size and assign char c  size
 * @c: Is the char to assign
 * @size: Is the size of an array
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

		str = malloc(sizeof(char) * size);

		if (size == 0 || str == NULL)

		return (NULL);

		for (i = 0; i < size; i++)
			str[i] = c;

		return (str);
}
