#include "main.h"
#include <stdio.h>

/**
 * main - Will be printing the name of our program
 * @argc: Is the number of arguments
 * @argv: Is the array of arguments
 *
 * Return: Always (0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
