#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size  of the tringle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j =  i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = i; j <= i; j++)
			{
				_putchar('0');
			}

			_putchar('\n');
		}
	}
}