#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

		for (i < n--; i++)
		{
			t = a(n);
			a[i] = a[n];
			a[n] = t;
		}
}
