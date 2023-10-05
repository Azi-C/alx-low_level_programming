#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array containing these arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
