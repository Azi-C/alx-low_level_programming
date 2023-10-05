#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array containing these arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	exit(EXIT_SUCCESS);
}
