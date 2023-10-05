#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - function that checks for a digit
 * @s: string to verify
 * Return: 0 if is a digit, 1 otherwise
 */

int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (1);
		s++;
	}
	return (0);
}

/**
 * main -  program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of these arguments
 * Return: 0 when success, 1 if one of the arg is not a number
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (_isdigit(argv[i]) != 0)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
		printf ("%d\n", sum);

		return (0);
	}
}
