#include "main.h"
#include <stdio.h>

/**
 * _atoi - Will be converting a string into an integer
 * @s: Is the string which will be converted
 *
 * Return: The int which is converted from the string
 */

int _atoi(char *s)
{
	int digit, len, i, d, f, n;

		digit = 0;
		len = 0;
		i = 0;
		d = 0;
		f = 0;
		n = 0;

		while (s[len] != '\0')
			len++;

		while (i < len && f == 0)
		{
			if (s[i] == '-')
				++d;

			if (s[i] >= '0' && s[i] <= '9')
			{
				digit = s[i] - '0';

				if (d % 2)
					digit = -digit;
				n = n * 10 + digit;
				f = 1;

				if (s[i + 1] < '0' || s[i + 1] > '9')

					break;
				f = 0;
			}
			i++;
		}

		if (f == 0)

			return (0);

		return (n);
}

/**
 * main - Will be multipling two numbers
 * @argc: Is the number of arguments
 * @argv: Is the array of arguments
 *
 * Return: (0), (1) (Error)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

		if (argc < 3 || argc > 3)
		{
			printf("Error\n");

		return (1);
		}

		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);

		result = num1 * num2;

		printf("%d\n", result);

		return (0);
}
