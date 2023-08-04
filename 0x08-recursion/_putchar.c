#include "main.h"
#include <unistd.h>

/**
 * _putchar - Will write the character c to stdout
 * On error, errno is set appropriately, and  (-1)is returned
 * @c: Is the character to be printed
 *
 * Return: (1) On success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
