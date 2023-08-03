#include "main.h"

/**
 *
 * puts_recursion-(is a replacement of the function puts();
 * @s: reperesents input
 *
 * Return: Always (0)
 *
 */

void_puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else

		_putchar('\n');
}
