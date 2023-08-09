#include <stdio.h>
#include "main.h"

/**
 * main - Will be printing all arguments it will be receiving
 * @argc: Is the number of arguments to be printed
 * @argv: Is the array of arguments to be printed
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i = 0;

		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}

		return (0);
}
