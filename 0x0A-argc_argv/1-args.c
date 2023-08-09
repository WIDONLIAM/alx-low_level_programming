#include <stdio.h>
#include "main.h"

/**
 * main - Will be printing the number of arguments passed in the program
 * @argc: Is the number of arguments
 * @argv: Is the array of arguments
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
