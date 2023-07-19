#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * void_ print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char a = 'c';

	while (a <= 'z')
	{
		putchar(a);
		a++;

	}
	
		putchar('\n');

}
