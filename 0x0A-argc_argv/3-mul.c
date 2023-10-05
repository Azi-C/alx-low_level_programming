#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array containing these arguments
 * Return: 0 (Success), 1 (Faillure)
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
		return (0);
	}
}
